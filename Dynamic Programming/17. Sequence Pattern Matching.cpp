#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824
/*
sequence pattern matching..
i.e, we have to find the a is subsequence of b...

so , min(a,size(),b.size()) = LCS(a,b);


 */
bool SequencePatternMatching(string a, string b) {
	int n = a.size() , m = b.size();

	int dp[n + 1][m + 1];

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0;


 

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1])
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

  if(min(n,m)==dp[n][m])
  	return true;
  else
  	return false;
	
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
	string a,b;
	cin>>a>>b;
     
    if(SequencePatternMatching(a,b))
    	cout<<"Yes"<<endl;
    else
    	cout<<"No"<<endl;

///////////////////////end-.........................

	return 0;

}


