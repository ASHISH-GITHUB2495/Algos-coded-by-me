#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

int matrix[100][100];
int dp[100][100];
/* target sum subset
Here you have given n and n array elements and a target 
you have to find wether a subset exists whose sum is equals to target
Example input:  5
				4 2 7 1 3
				10
        output: 1
*/





bool solve(int arr[], int tar, int n, int idx, int sum) {

	if (sum == tar)
		return true;
	if (idx == n)
		return false;



	return solve(arr, tar, n, idx + 1, sum + arr[idx]) || solve(arr, tar, n, idx + 1, sum);
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

	cout << solve(arr, tar, n, 0, 0) << endl;


///////////////////////end-........................

	return 0;

}