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
by sir
*/


int dp[100];



int solve(int arr[], int tar, int n) {
	//base cases
     dp[0]=1;

	//recursion
	for (int i = 0; i < n; i++) {  //looping through coin 
		for (int j = arr[i]; j < tar + 1; j++) { //to every possible sum
			dp[j]+=dp[j-arr[i]];
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