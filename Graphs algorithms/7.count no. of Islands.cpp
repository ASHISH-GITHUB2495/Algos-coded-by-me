#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Counting Islands in 2d matrix..
  --------------------
  Here in this question we have given 2d matrix of 0s and 1s .. 0s represents land
  and 1s represents water .. every land and water connected to each other north south east west.
  you have to find the no. of Islands.

  example input:
8 8
0 0 1 1 1 1 1 1
0 0 1 1 1 1 1 1
1 1 1 1 1 1 1 0
1 1 0 0 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 1 1 1 0

output: 
Number of connected islands are: 3

*/
int mat[100][100];
int vis[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int n, int m, int r, int c) {
	vis[r][c] = 1;

	for (int i = 0; i < n; i++) {
		int nx = dx[i] + r;
		int ny = dy[i] + c;

		if (nx >= 0 && nx < n && ny >= 0 && ny < m && vis[nx][ny] != 1 && mat[nx][ny] == 0)
			dfs(n, m, nx, ny);
	}

	return;

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
//////////////////////////////////////start............
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			vis[i][j] = 0;


	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (vis[i][j] == 0 && mat[i][j] == 0) {
				cnt++;
				dfs(n, m, i, j);
			}
		}
	}
	cout << "Number of connected islands are: " << cnt << endl;


///////////////////////end-.........................

	return 0;

}


