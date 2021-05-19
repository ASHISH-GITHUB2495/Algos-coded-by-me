#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* Unbounded knapsack ...

Here you have given n items with weight and value  and a bag with capacity.
you have to put items into it .. that is the item putted whole or not..infinity times
and you have to find the maximum value of the items that can be putted into the bag.

example input:  6
				15 14 10 45 30 40
				2 5 1 3 4 8
				7

		output: Maximum profit is : 100


approack one recursion
*/



int dp[100][500];


int knapsack(int wt[], int val[], int w, int n) {
	//base cases
	if (w == 0 || n == 0)
		return 0;


	if (wt[n - 1] <= w)
		return max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n) , knapsack(wt, val, w, n - 1) );
	else
		return knapsack(wt, val, w, n - 1);


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
	//memset(dp, -1, sizeof(dp));


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


