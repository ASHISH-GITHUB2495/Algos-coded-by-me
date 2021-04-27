#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* queens permutation 1... we have to print the all permutaiton of distinct queen that
 can be placed in chess board n*n ...

example input: 4
 output :

1234
0000
0000
0000

1230
4000
0000
0000

1230
0400
0000
0000

......


*/

int chess[100][100];
void queensCombinations(int qsf, int tq) {

	if (qsf > tq) {

		for (int i = 0; i < tq; i++) {
			for (int j = 0; j < tq; j++)
				cout << chess[i][j];
			cout << endl;
		}
		cout << endl;
		return;

	}



	for (int i = 0; i < tq; i++) {
		for (int j = 0; j < tq; j++) {
			if (chess[i][j] == 0) {
				chess[i][j] = qsf;
				queensCombinations(qsf + 1, tq);
				chess[i][j] = 0;

			}

		}

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
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			chess[i][j] = 0;

	queensCombinations(1, n);
///////////////////////end-........................

	return 0;

}