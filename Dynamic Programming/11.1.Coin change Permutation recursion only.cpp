#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


/* coin change permuation
Here you have given n and n array elements and a sum
you have to find count the  sum of coins, whose sum is equals to the given sum(repetion allowed)
like for 2 3 5 and sum 7..
possible ways : 2 2 3
    			2 3 2
    			3 2 2
    			2 5
    			5 2
    	total 5 ways with permutation allowed.

Example input:  4
				2 3 5 6
				10

        output: 17
without dp, recursion with help of internet
*/


int dp[100];

int solve(int arr[], int tar, int n, string ans) {
	//base case
	if (tar == 0 ) {
		cout << ans << endl;
		return 1;
	}
	if (tar < 0)
		return 0;


	int result = 0;

	for (int i = 0; i < n; i++) {
		result += solve(arr, tar - arr[i], n, ans + to_string(arr[i]) + " ");

	}


	return result;


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
	for (int i = 0; i < n; i++)  cin >> arr[i];
	int tar; cin >> tar;
   
    int res=solve(arr, tar, n, "") ;
	cout <<endl<<"Total no. of ways we can make the sum: " << res<< endl;


///////////////////////end-........................

	return 0;

}
