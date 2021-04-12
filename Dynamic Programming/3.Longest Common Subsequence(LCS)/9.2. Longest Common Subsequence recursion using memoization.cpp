#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//LCS using recursive with memoization....

int dp[1000][1000] ;  //set n and m values according to given constraints...


int LCS_recur_memoizatoin(string x,string y,int n,int m){
  
  if(n==0 || m==0)
  	return 0;

  if(dp[n][m]!=-1)
  	return dp[n][m];

  if(x[n-1] == y[m-1])
  	return dp[n][m] = 1+LCS_recur_memoizatoin(x,y,n-1,m-1);
  else
  	return dp[n][m] = max(LCS_recur_memoizatoin(x,y,n-1,m) , LCS_recur_memoizatoin(x,y,n,m-1));



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
	memset(dp,-1,sizeof(dp));
	
	string s1,s2;
	cin>>s1>>s2;

	cout<<"Longest Common Subsequence is : "<<LCS_recur_memoizatoin(s1,s2,s1.size(),s2.size());





///////////////////////end-.........................

	return 0;

}


