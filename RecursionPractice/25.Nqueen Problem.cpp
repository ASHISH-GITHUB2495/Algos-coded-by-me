#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//n - queen problem.. for problem statement google it....


int board[100][100];

bool isQueenSafetoPlace(int row, int col, int n) {



	int r = row - 1; int c = col;

	//for upward check
	while (r >= 1 && c >= 1) {
		if (board[r][c] == 1)return false;
		r--;
	}
	//for left upward check
	r = row - 1, c = col - 1;
	while (r >= 1 && c >= 1) {
		if (board[r][c] == 1) return false;
		r--; c--;
	}
	//for right upward check
	r = row - 1, c = col + 1;
	while (r >= 1 && c <= n) {
		if (board[r][c] == 1) return false;
		r--, c++;
	}

	return true;

}

void nQueen(int n, string ans, int row) {
	if (row == n + 1)
	{
		cout << ans << endl;
		return;
	}

	for (int i = 1; i <= n; i++) { // for all columns
		board[row][i] = 1;
		if (isQueenSafetoPlace(row, i, n))
			nQueen(n, ans + "[" + to_string(row) + "," + to_string(i) + "] ", row + 1);
		board[row][i] = 0;
	}
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
	cin >> n ; //nxn board...

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			board[i][j] = 0;  // all place safe of board n x n ...



	nQueen(n, "", 1);


///////////////////////end-........................

	return 0;

}