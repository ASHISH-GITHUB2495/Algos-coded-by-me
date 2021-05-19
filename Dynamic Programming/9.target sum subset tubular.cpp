#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


/* target sum subset
Here you have given n and n array elements and a target
you have to find wether a subset exists whose sum is equals to target
Example input:  5
				4 2 7 1 3
				10

				6
				3 34 4 12 5 2
				9

        output: Yes possible
                Yes possible
                
*/

int matrix[100][100];
int dp[100][100];



bool solve(int arr[], int tar, int n) {
  //base cases
	for (int i = 0; i < tar + 1; i++)
		dp[0][i] = 0;

	for (int i = 0; i < n + 1; i++)
		dp[i][0] = 1;
  
  //recursion
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < tar + 1; j++) {
			if (arr[i - 1] <= j)
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];// contribute || not contribute
			else
				dp[i][j] =  dp[i - 1][j];
		}
	}



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

	if ( solve(arr, tar, n))
		cout <<"Yes posible"<< endl;
	else
		cout<<"Not possible"<<endl;

///////////////////////end-........................

	return 0;

}