#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824



int minCoins(int coins[], int n, int sum)
{
	int dp[n + 1][sum + 1];


	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < sum + 1; j++) {
			if (i == 0)
				dp[i][j] = INT_MAX - 1;
			if (j == 0)
				dp[i][j] = 0;

		}

		for(int i=1;i<sum+1;i++)
			if(i%coins[0]==0)
				dp[1][i]=1;
			else
				dp[1][i]=INT_MAX-1;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (coins[i - 1] <= j)
				dp[i][j] = min( dp[i][j - coins[i - 1]] + 1 , dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

		return dp[n][sum];



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

	int sum;
	cin>>sum;

	int v[3];
	for(int i=0;i<3;i++)
		cin>>v[i];

	cout<<minCoins(v,3,sum)<<endl;



///////////////////////end-.........................

	return 0;

}


