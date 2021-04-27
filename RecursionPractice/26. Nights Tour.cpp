#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//the knights tour
/*
in the knights tour ... you have given n .. and start point ..
you have to find the path that it can visit all the cell ..
without visitin any cells twice.
*/

int board[100][100];


void knightsTour(int n, int r, int c , int move) {

	if (r < 1 || c < 1 || r > n || c > n || board[r][c] != 0)
		return;
	else if (move == n * n) {	
		//display cheess
		board[r][c]=move;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				cout << board[i][j] << " ";
			cout << endl;
		}
		cout<<endl;
		//board[r][c]=0; it will cause to find multiple solutions....
		return;
	}

	board[r][c] = move;

	knightsTour(n, r - 2, c + 1, move + 1);
	knightsTour(n, r - 1, c + 2, move + 1);
	knightsTour(n, r + 1, c + 2, move + 1);
	knightsTour(n, r + 2, c + 1, move + 1);
	knightsTour(n, r + 2, c - 1, move + 1);
	knightsTour(n, r + 1, c - 2, move + 1);
	knightsTour(n, r - 1, c - 2, move + 1);
	knightsTour(n, r - 2, c - 1, move + 1);

	board[r][c] = 0;



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
	int r, c;
	cin >> r >> c;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			board[i][j] = 0;  // all place safe of board n x n ...



	knightsTour(n, r, c, 1);


///////////////////////end-........................

	return 0;

}