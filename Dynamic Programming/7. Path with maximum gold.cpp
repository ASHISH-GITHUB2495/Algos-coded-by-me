#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007

// Goldmine .. Path with maximum gold
/*
 you have given matrix of gold present in each sell.. 
 you can start from any where from first column and head to right up,right,right down
 where until you reach to the right column you have maximum gold

 Tabular by sir...
 sample input:  6 6
				0 1 4 2 8 2
				4 3 6 5 0 4
				1 2 4 1 4 6
				2 0 7 3 2 2 
				3 1 5 9 2 4
				2 7 0 8 5 1


*/
int matrix[100][100];
int dp[100][100];

int solve(int n, int m) {

	//base case last column is same

	for (int i = 0; i < n; i++)
		dp[i][m - 1] = matrix[i][m - 1];


	for (int j = m - 2; j >= 0; j--) {
		for (int i = 0; i < n; i++) {
			int ru = INT_MIN, r = INT_MIN, rd = INT_MIN;

			if (i - 1 >= 0)
				ru = matrix[i][j] + dp[i - 1][j + 1];

			r = matrix[i][j] + dp[i][j + 1];

			if (i + 1 < n)
				rd = matrix[i][j] + dp[i + 1][j + 1];

			dp[i][j] = max(ru, max(r, rd));

		}
	}

	//now returning max gold which is at first column
	int maxx = dp[0][0];
	for (int i = 1; i < n; i++)
		maxx = max(maxx, dp[i][0]);

	return maxx;
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
			cin >> matrix[i][j], dp[i][j] = 0;


	cout<<solve(n, m)<<endl;;

///////////////////////end-........................

	return 0;

}