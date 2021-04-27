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

     In combinations way
*/

void solve(int boxes[], int total_box, int curr_item, int total_r, int lastBox) {

	if (curr_item > total_r) {
		{	for (int i = 0; i < total_box; i++)
				if (boxes[i] != 0)
					cout << "i";
				else
					cout << "-";
			cout << endl;
		}
  return;

	}


	for (int i = lastBox + 1; i < total_box; i++) {
		if (boxes[i] == 0) {
			boxes[i] = 1;
			solve(boxes, total_box, curr_item + 1, total_r, i);
			boxes[i] = 0;
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
	int n, r;
	cin >> n >> r;

	int boxes[n];
	for (int i = 0; i < n; i++) boxes[i] = 0;

	solve(boxes, n, 1, r, -1);



///////////////////////end-........................

	return 0;

}