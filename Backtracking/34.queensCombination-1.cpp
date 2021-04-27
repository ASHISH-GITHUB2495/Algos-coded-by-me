#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* queens combination ... we have to print the all combinations of queen that 
 can be placed in chess board n*n ...

example input: 2
        output  qq
			    --

				q-
				q-

				q-
				-q

				-q
				q-
		
				-q
				-q

				--
				qq

*/


void queensCombinations(int qsf, int tq, int x, int y, string ans) {
	if (x == tq) {
		if (qsf == tq)
			cout << ans << endl;
		return;
	}

	if (y == tq - 1) {
		queensCombinations(qsf + 1, tq, x + 1, 0, ans + "q\n");
		queensCombinations(qsf + 0, tq, x + 1, 0, ans + "-\n");
	} else {
		queensCombinations(qsf + 1, tq, x, y + 1, ans + "q");
		queensCombinations(qsf + 0, tq, x, y + 1, ans + "-");
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

	queensCombinations(0, n, 0, 0, "");
///////////////////////end-........................

	return 0;

}