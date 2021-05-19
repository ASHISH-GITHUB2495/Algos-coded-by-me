#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

// Climbing stairs with variable jumps
/* Here you have given n which is no. of ladders and array of n size where from every
   ladder their is specified no. of jumps allowed..you are in 0th and you have to go to the top.
  find the number of ways.



*/
int ladder[100];
int ladders(int n, int allowed[]) {

	//base cases
	ladder[n] = 1;

	for (int i = n - 1; i >= 0; i--) {

		for (int j = 1; j <= allowed[i]; j++) {
			if (i + j <= n)
				ladder[i] += ladder[i + j];
		}
	}


	return ladder[0];
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
	int allowed[n];
	for (int i = 0; i < n; i++) cin >> allowed[i];

	cout << ladders(n, allowed) << endl;

///////////////////////end-........................

	return 0;

}