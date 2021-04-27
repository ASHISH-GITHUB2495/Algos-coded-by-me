#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* printing permutation .. suppose you have given .. n and r
no. of ways .. n!/(n-r)!;
input : n=4 ,r=2;
output: 1200
  		1020
		1002
		2100
		0120
		0102
		2010
		0210
		0012
		2001
		0201
		0021
*/

void solve( int n,int r, int boxes[], int num) {
	
	if (num > r) {
		for (int i = 0; i < n; i++) cout << boxes[i];
		cout << endl;
		return;
	}


	for (int i = 0; i < n; i++) {
		if (boxes[i] == 0) {
			boxes[i] = num;
			solve(n, r, boxes, num + 1);
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
    
    
	solve( n,r, boxes, 1);




///////////////////////end-........................

	return 0;

}