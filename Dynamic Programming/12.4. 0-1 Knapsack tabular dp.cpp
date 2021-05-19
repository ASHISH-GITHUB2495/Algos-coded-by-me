#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* Knapsack 0-1 ...

Here you have given n items with weight and value  and a bag with capacity.
you have to put items into it .. that is the item putted whole or not..ONLY ONE TIME OR NOT
and you have to find the maximum value of the items that can be putted into the bag.

example input:  6
				15 14 10 45 30 40
				2 5 1 3 4 8
				7

		output: 75


approach 3: now we will introduce dp so that it returns the repetive calls
            total call ....32 calls
*/



int dp[100][500];


int knapsack(int wt[], int val[], int w, int n) {
	//base cases
	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < w + 1; j++)
			if (i == 0 ||  j == 0)
				dp[i][j] = 0;

	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < w + 1; j++) {
			if (wt[i - 1] <= j)
				dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];

		}



	return dp[n][w];
}



int main()
{

#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	memset(dp, -1, sizeof(dp));


	int n, w;
	cin >> n ;
	int wt[n], val[n];
	for (int i = 0; i < n; i++)
		cin >> val[i];
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	cin >> w;

	cout << "Maximum profit is : " << knapsack(wt, val, w, n) << endl;





///////////////////////end-.........................

	return 0;

}


