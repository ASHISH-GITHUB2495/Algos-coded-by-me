#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* printing combination .. suppose you have given .. n and r
no. of ways + arragement .. n!/((n-r)!*r!);
input : n=3 ,r=2;
output:  120
         102
         012
*/

void solve( int n, int r, int boxes[], int bidx, int ritem) {

	if (ritem > r) {
		for (int i = 0; i < n; i++)cout << boxes[i];
		cout << endl;
		return;
	} if (bidx == n)
		return;




	boxes[bidx] = ritem;
	solve(n, r, boxes, bidx + 1, ritem + 1);
	boxes[bidx] = 0;
	solve(n, r, boxes, bidx + 1, ritem);


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
	int n, r;
	cin >> n >> r;

	int boxes[n];
	for (int i = 0; i < n; i++) boxes[i] = 0;


	solve( n, r, boxes, 0, 1);




///////////////////////end-........................

	return 0;

}