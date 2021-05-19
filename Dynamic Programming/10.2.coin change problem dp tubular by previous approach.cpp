#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


/* coin change combinations
Here you have given n and n array elements and a sum
you have to find count the  sum of coins, whose sum is equals to the given sum
Example input:  3
				2 3 5
				7

        output: 2

*/


int dp[100][100];



int solve(int arr[], int tar, int n) {
	//base cases
	for (int i = 0; i < tar + 1; i++)
		dp[0][i] = 0;

	for (int i = 0; i < n + 1; i++)
		dp[i][0] = 1;

	//recursion
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < tar + 1; j++) {
			if (arr[i - 1] <= j)
				dp[i][j] = dp[i - 1][j] + dp[i ][j - arr[i - 1]];// contribute || not contribute
			else
				dp[i][j] =  dp[i - 1][j];
		}
	}

    //  for (int i = 0; i < n + 1; i++) {
	// 	for (int j = 0; j < tar + 1; j++) {
	// 	  cout<<dp[i][j]<<" ";
	// 	}cout<<endl;
	// }

	return dp[n][tar];


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

	cout <<  solve(arr, tar, n) << endl;


///////////////////////end-........................

	return 0;

}