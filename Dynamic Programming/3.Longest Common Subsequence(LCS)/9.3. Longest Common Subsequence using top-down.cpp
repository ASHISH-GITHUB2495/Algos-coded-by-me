#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//LCS using Top-down dp//.


int LCS_topDown(string x,string y,int n,int m){
  
  int dp[n+1][m+1];

  memset(dp,-1,sizeof(dp));

  for(int i=0;i<n+1;i++)
  	for(int j=0;j<m+1;j++)
  		if(i==0 || j==0)
  			dp[i][j]=0;

  for(int i=1;i<n+1;i++){
  	for(int j=1;j<m+1;j++){
  		if(x[i-1]==y[j-1])
  			dp[i][j]=1+dp[i-1][j-1];
  		else
  			dp[i][j]=max(dp[i-1][j],dp[j-1][i]);
  	}
  }

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

	string s1,s2;
	cin>>s1>>s2;

	cout<<"Longest Common Subsequence is : "<<LCS_topDown(s1,s2,s1.size(),s2.size());





///////////////////////end-.........................

	return 0;

}


