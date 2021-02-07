#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

/*
Here we have question of Rod cutting ... where we have given rod length, prices array of each length type,
we may or may not have given rod variable lengths...

Now , we have to cut the lengths such as price should me maximum...

we can repeat the pices it is ubonded knapsack..
if we can't repeat the pices then it is 0-1 Knapsack..

*/




int RodCutting(int len[], int prices[], int length, int n) {

	int dp[n + 1][length + 1];

	for (int i = 0; i <= n; i++) 
		for (int j = 0; j <= length; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=length;j++){
			if(len[i-1]<=j)
				dp[i][j]=max(prices[i-1]+dp[i][j-len[i-1]] , dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}

return dp[n][length];
	


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
	int n; int length ; // nubmer of possible pices and rod lenght
	cin >> n;
	cin >> length;
	int len[n] , prices[n];   // lengths array and its prices array

	for (int i = 0; i < n; i++)
		cin >> len[i];
	for (int i = 0; i < n; i++)
		cin >> prices[i];



	cout << "Maximum profit can be " << RodCutting(len, prices , length, n) << endl;


///////////////////////end-.........................

	return 0;

}


