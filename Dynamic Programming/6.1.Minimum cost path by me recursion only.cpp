#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

// Minimum cost path
/* 
 you have given matrix of cost of each path.. you have to go from top left to right bottom 
 with minimum cost.

 ,,,,,,only recursion... By me,,,,,
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

void solve(int n, int m, int r, int c, int &minn, int c_cost, string ans) {
	if (r == n - 1 && c == m - 1) {
		minn = min(minn, c_cost);

		//cout << ans << " " << c_cost << endl;

		return;
	}
//cout<<"hii"<<endl;
	if (c + 1 < m)
		solve(n, m, r, c + 1, minn, c_cost + matrix[r][c + 1], ans + " r");
	if (r + 1 < n)
		solve(n, m, r + 1, c, minn, c_cost + matrix[r + 1][c], ans + " d");

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
			cin >> matrix[i][j];

	int minn = INT_MAX;


	solve(n, m, 0, 0, minn, matrix[0][0], "");
	cout << minn << endl;

///////////////////////end-........................

	return 0;

}