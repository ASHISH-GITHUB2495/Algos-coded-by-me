#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
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


approach 2: we will little bit reduce Brute force..
            we will only include those item which is less or equal to the capacity and
            we will return whenever our weight sum exceeds the capacity.

           Recursion only...total 58 calls

*/




void solve(int arr[], int val[], int n, int idx, int &maxx, int w, int sum, int capacity) {
	cout << "hii" << endl;
	if (w == capacity) {
		maxx = max(maxx, sum);
		return;
	}
	if (w > capacity)
		return;

	if (n == idx)
		return;


	if (arr[idx] <= capacity)
	{	solve(arr, val, n, idx + 1, maxx,  w + arr[idx], sum + val[idx], capacity);
		solve(arr, val, n, idx + 1, maxx, w, sum, capacity);
	}
	else
		solve(arr, val, n, idx + 1, maxx, w, sum, capacity);



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
//////////////////////////////////////start........
	int n;
	cin >> n;
	int arr[n], val[n];
	for (int i = 0; i < n; i++)  cin >> val[i];
	for (int i = 0; i < n; i++)  cin >> arr[i];
	int capacity; cin >> capacity;
	int maxx = INT_MIN;


	solve(arr, val, n, 0, maxx, 0, 0, capacity);
	cout << maxx << endl;

///////////////////////end-........................

	return 0;

}
