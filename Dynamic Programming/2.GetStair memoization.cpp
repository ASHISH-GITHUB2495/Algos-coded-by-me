#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//getStairPath-> recursion + memoization   ... for concept check recursion

int ladder[100];
int ladders(int n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0)
		return 0;

	if (ladder[n] != 0)
		return ladder[n];


	return ladder[n] = ladders(n - 1) + ladders(n - 2) + ladders(n - 3);
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
	for (int i = 0; i <= n; i++)ladder[i] = 0;
	cout << ladders(n) << endl;

///////////////////////end-........................

	return 0;

}