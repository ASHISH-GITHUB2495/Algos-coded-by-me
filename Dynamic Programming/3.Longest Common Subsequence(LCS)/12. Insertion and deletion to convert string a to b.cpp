#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824

//Top-down Dp approach

/*
Minimum number of insertion and deletion to convert
string a -> b...

so.. insertion = b.size()-lcs(a,b);
     deletion = a.size()-lcs(a,b);

 */


pair<int,int> convert(string a,string b){
 int n=a.size() , m=b.size();

 int dp[n+1][m+1];

 for(int i=0;i<=n;i++)
 	for(int j=0;j<=m;j++)
 		if(i==0 || j==0)
 			dp[i][j]=0;


 for(int i=1;i<=n;i++){
 	for(int j=1;j<=m;j++){
 		if(a[i-1]==b[j-1])
 			dp[i][j]=1+dp[i-1][j-1];
 		else
 			{
 				if(dp[i][j-1]>dp[i-1][j])
                    dp[i][j]=dp[i][j-1];
                else
                	dp[i][j]=dp[i-1][j];

 			}
 	}
 }


  return {m-dp[n][m],n-dp[n][m]};





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

   pair<int,int> p=convert(a,b);

   cout<<"Insertion = "<<p.first<<" , deletion = "<<p.second<<endl;

	
///////////////////////end-.........................

	return 0;

}


