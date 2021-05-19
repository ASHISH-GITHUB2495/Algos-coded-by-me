#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


/* target sum subset
Here you have given n and n array elements and a target
you have to find wether a subset exists whose sum is equals to target
Example input:  3
    			2 3 5
				7

        output: 2 2 3
                2 5


*/

int matrix[100][100];
int dp[100][100];



void solve(int arr[], int tar, int n, int idx, int csum, string ans) {
	if (csum == tar) {
		cout << ans << endl;
		return ;
	}
	if (idx == n)
		return;

	if (arr[idx] + csum <= tar) {
		solve(arr, tar, n, idx, csum + arr[idx], ans + to_string(arr[idx]) + " ");
		solve(arr, tar, n, idx + 1, csum, ans);
	}
	else
		solve(arr, tar, n, idx + 1, csum, ans);


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

	// if ( solve(arr, tar, n))
	// 	cout <<"Yes posible"<< endl;
	// else
	// 	cout<<"Not possible"<<endl;

	solve(arr, tar, n, 0, 0, "");

///////////////////////end-........................

	return 0;

}