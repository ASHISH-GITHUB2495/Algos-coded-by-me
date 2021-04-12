#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824


/*
Unbounded Knapsack using Top-down dp....
*/



int unboundedKnapsack(int wt[], int val[], int w, int n) {
  
  int dp[n+1][w+1];

  for(int i=0;i<n+1;i++)
  	for(int j=0;j<w+1;j++)
      if(i==0 || j==0)
      	dp[i][j]=0;


     for(int i=1;i<=n;i++){
     	for(int j=1;j<=w;j++)
     	{
     		if(wt[i-1]<=j)
     			dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]] ,dp[i-1][j]);
     		else
     			dp[i][j]=dp[i-1][j];
     	}
     }
  

return dp[n][w];

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
	int n; int w ;
	cin >> n;
	cin >> w;
	int wt[n] , val[n];

	for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];



	cout << "Maximum profit can be " << unboundedKnapsack(wt, val , w, n) << endl;


///////////////////////end-.........................

	return 0;

}


