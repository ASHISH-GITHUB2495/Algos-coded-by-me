#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Sudoku
/*
Here, in sudokuc .. we have given 9x9 matrix.. with 0 - 9 integers
you have to replace 0 with 1-9 such that...
no submatrix 3x3 contains duplicate no colums and no rows...
*/

//Example

int sudoku[9][9] = { {3, 0, 6, 5, 0, 8, 4, 0, 0},
	{5, 2, 0, 0, 0, 0, 0, 0, 0},
	{0, 8, 7, 0, 0, 0, 0, 3, 1},
	{0, 0, 3, 0, 1, 0, 0, 8, 0},
	{9, 0, 0, 8, 6, 3, 0, 0, 5},
	{0, 5, 0, 0, 9, 0, 6, 0, 0},
	{1, 3, 0, 0, 0, 0, 2, 5, 0},
	{0, 0, 0, 0, 0, 0, 0, 7, 4},
	{0, 0, 5, 2, 0, 6, 3, 0, 0}
};

bool isPossible(int r, int c, int digit) {


	//checking submatrix
	int smr = 3 * (r / 3), smc = 3 * (c / 3);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3 ; j++)
			if (sudoku[smr + i][smc + j] == digit)
				return false;


	//checking row
	for (int i = 0; i < 9; i++)
		if (sudoku[r][i] == digit)
			return false;



	//checking column
	for (int i = 0; i < 9; i++)
		if (sudoku[i][c] == digit)
			return false;

	return true;

}

void solveSudoku(int r, int c) {

	if (r == 9)
	{	//print it!

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				cout << sudoku[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		return;
	}

	if (sudoku[r][c] == 0)
	{
		for (int i = 1; i <= 9; i++)
		{
			if (isPossible(r, c, i))
			{	sudoku[r][c] = i;
				if (c < 8)
					solveSudoku(r, c + 1);
				else
					solveSudoku(r + 1, 0);
				sudoku[r][c] = 0;
			}
		}
	} else {
		if (c < 8)
			solveSudoku(r, c + 1);
		else
			solveSudoku(r + 1, 0);
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


	solveSudoku(0, 0);


///////////////////////end-........................

	return 0;

}