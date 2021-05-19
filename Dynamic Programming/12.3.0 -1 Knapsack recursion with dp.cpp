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
	//cout << "hii" << endl;
	if (n == 0 || w == 0)
		return 0;

	if (dp[n][w] != -1)
		return dp[n][w];


	if (wt[n - 1] <= w)
		return dp[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
	else
		return dp[n][w] = knapsack(wt, val, w, n - 1);



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


