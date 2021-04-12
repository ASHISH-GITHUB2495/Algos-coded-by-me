#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

/*
Unbounded Knapsack using recursion only.....
*/



int unboundedKnapsack(int wt[], int val[], int w, int n) {
  
	if (n == 0 || w == 0)
		return 0;

	if (wt[n - 1] <= w)
		return max(val[n - 1] + unboundedKnapsack(wt, val, w - wt[n - 1], n), unboundedKnapsack(wt, val, w, n - 1));
	else
		return unboundedKnapsack(wt, val , w , n - 1);

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


