#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//nQueen branch and bound..
/*
In this approach we will bound the branches of recursion...
here, we willl gonna create 3 arrays.. for column , left down diagonal and right down diagonal

to store the bounds...
for columns ->   col[c]=true;      size -> col[n];
for leftDia ->   ld[r+c]=true;     size -> ld[2*n-1];
for rightDia ->  rd[r-c+n-1]=true; size -> rd[2*n-1];

*/
int n;


int board[1000][1000];
int col[1000];
int ld[2 * 1000 - 1];
int rd[2 * 1000 - 1];
bool isSafe(int r, int c) {

	//check column
	if (col[c] == 1)
		return false;
	if (ld[r + c] == 1)
		return false;
	if (rd[r - c + n - 1] == 1)
		return false;

	return true;
}

void nQueenBranchBound(int r) {

	if (r == n)
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << board[i][j] << " ";
			cout << endl;
		}
		cout<<endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (isSafe(r, i))
		{	board[r][i] = 1;
			col[i]=1 , ld[r+i]=1, rd[r-i+n-1]=1;
			
			nQueenBranchBound(r + 1);

			col[i]=0 , ld[r+i]=0, rd[r-i+n-1]=0;
			board[r][i] = 0;
		}

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
//////////////////////////////////////start........

	cin >> n;
	for (int i = 0; i < n; i++)
		col[i] = 0;
	for (int i = 0; i < 2 * n - 1; i++)
		ld[i] = 0;
	for (int i = 0; i < 2 * n - 1; i++)
		rd[i] = 0;

	nQueenBranchBound(0);


///////////////////////end-........................

	return 0;

}