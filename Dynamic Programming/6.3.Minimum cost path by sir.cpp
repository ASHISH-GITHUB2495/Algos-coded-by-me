#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007

// Minimum cost path
/*
 you have given matrix of cost of each path.. you have to go from top left to right bottom
 with minimum cost.

 Tabular by sir...
 sample input:  7 7
				2 8 4 1 6 4 2
				6 0 9 5 3 8 5
				1 4 3 4 0 6 5
				6 4 7 2 4 6 1
				1 0 3 7 1 2 7
				1 5 3 2 3 0 9
				2 2 5 1 9 8 2
				

*/
int matrix[100][100];
int dp[100][100];

int solve(int n, int m) {

	dp[n - 1][m - 1] = matrix[n - 1][m - 1];


	for (int i = n - 1; i >= 0; i--) {
		for (int j = m - 1; j >= 0; j--) {
			int right = INT_MAX,  down = INT_MAX;
			
			if (i + 1 < n)
				down = dp[i + 1][j] + matrix[i][j];

			if (j + 1 < m)
				right = dp[i][j + 1] + matrix[i][j];
			
			dp[i][j] = min(min(right, down),dp[i][j]);

		}
	}


	return dp[0][0];


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
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j], dp[i][j] = INT_MAX;



	cout << solve(n, m) << endl;

///////////////////////end-........................

	return 0;

}