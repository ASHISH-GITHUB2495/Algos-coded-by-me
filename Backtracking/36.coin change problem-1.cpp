#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* coin change problem 1 : you have given n coins and sum
you have to print the combinations of the coin that make the sum
without repetion of the coins.
example input:5
              2 3 5 6 7
              12
        output:{2 3 7 }
			   {5 7 }


*/

void coinChange(int arr[], int n, int c_coin, int r_sum, int c_sum, string ans) {

	if (c_sum == r_sum) {

		cout <<"{"<<ans<<"}"<< endl;
		return;
	} if (c_coin == n)
		return;


	coinChange(arr, n, c_coin + 1, r_sum, c_sum + arr[c_coin], ans + to_string(arr[c_coin]) + " ");
	coinChange(arr, n, c_coin + 1, r_sum, c_sum, ans);

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

	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	int sum; cin >> sum;

	coinChange(arr, n, 0, sum, 0, "");

///////////////////////end-........................

	return 0;

}