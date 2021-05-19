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

        output: 5
by sir
*/


int dp[100];



int solve(int arr[], int tar, int n) {
	//base cases
     dp[0]=1;

	//recursion
	for (int i = 1; i < tar+1; i++) {
		for (int j = 0; j < n; j++) {
			if(arr[j]<=i){
				dp[i]+=dp[i-arr[j]];
			}
		}
	}

   

	return dp[tar];


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