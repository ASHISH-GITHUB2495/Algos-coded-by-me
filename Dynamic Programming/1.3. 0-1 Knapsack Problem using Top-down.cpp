#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//dp.. With Top Down approach

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
	/*
	  n is no. of items , w is capacity of bag,
	  wt array of items , val is array of prices or values
	*/

	int n, w;
	cin >> n >> w;
	int wt[n], val[n];
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];

	int dp[n+1][w+1];

	for(int i=0;i<n+1;i++)
		for(int j=0;j<w+1;j++)
			if(i==0||j==0)
				dp[i][j]=0;


	for(int i=1;i<n+1;i++)
		for(int j=1;j<w+1;j++){
			if(wt[i-1]<=j)
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];

		}


	cout << "Maximum profit is : " << dp[n][w] << endl;





///////////////////////end-.........................

	return 0;

}


