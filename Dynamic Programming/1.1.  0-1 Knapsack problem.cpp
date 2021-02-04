#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

// non dp ..only recursion ... next with memoization...


int knapsack(int wt[], int val[], int w, int n) {

	if (n == 0 || w == 0)
		return 0;


	if (wt[n - 1] <= w)
		return (max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1),knapsack(wt,val,w,n-1)));
	else
		return knapsack(wt,val,w-wt[n-1],n-1);



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


	cout << "Maximum profit is : " << knapsack(wt, val, w, n) << endl;





///////////////////////end-.........................

	return 0;

}


