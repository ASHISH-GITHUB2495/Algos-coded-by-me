#include<bits/stdc++.h>
using namespace std;

//#define int long long
#define mod 1073741824
//DP .. using memoization.. let n and w constraint is 100 and 1000 respectively

int dp[100][500];


int knapsack(int wt[], int val[], int w, int n) {

	if (n == 0 || w == 0)
		return 0;

    if(dp[n][w]!=-1)
    	return dp[n][w];


	if (wt[n - 1] <= w)
		return dp[n][w]= max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
	else
		return dp[n][w]=knapsack(wt, val, w, n - 1);



}



int main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	/*
	  n is no. of items , w is capacity of bag,
	  wt array of items , val is array of prices or values
	*/
	memset(dp, -1, sizeof(dp));


	int n, w;
	cin >> n >> w;
	int wt[n], val[n];
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];


	cout << "Maximum profit is : " << knapsack(wt, val, w, n) << endl;





///////////////////////end-.........................

	return 0;

}


