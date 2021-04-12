#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824
/*
Longest Repeating Subsequence...

apply  Lcs on (a,a) and pic same characheter with differenct indices;

 */
int LRS(string a, string b) {
	int n = a.size() , m = b.size();

	int dp[n + 1][m + 1];

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0;


 

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]&& i!=j)
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
			{
				if (dp[i][j - 1] > dp[i - 1][j])
					dp[i][j] = dp[i][j - 1];
				else
					dp[i][j] = dp[i - 1][j];
			}
		}
	}


	// Return size or get the string ......
 int i=n,j=m;string s="";

 while(i>0 && j>0){
 	if(a[i-1]==b[j-1] && i!=j)
        s.push_back(a[i-1]) , i--,j--;
    else{
    	 if(dp[i][j-1]>dp[i-1][j])
    	 	j--;
    	 else
    	 	i--;
    }
 }

/* 
For getting the string also
---------------------------

cout<<endl;
for(int i=0;i<=n;i++)
{	for(int j=0;j<=m;j++)
		cout<<dp[i][j]<<" ";
	cout<<endl;}

reverse(s.begin(),s.end());

cout<<s<<endl;
*/

	return dp[n][m];
}


int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	string a;
	cin >> a;
     


	cout << "Longest Repeating Subsequence: " << LRS(a, a) << endl;


///////////////////////end-.........................

	return 0;

}


