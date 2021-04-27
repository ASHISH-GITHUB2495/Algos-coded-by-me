#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

// Get maze path ... print only
void getMazePaths(int sr, int sc, int dr, int dc, string ans) {

	
		if (sr == dr && sc == dc)
			{cout << ans << endl;
					return;}
	    if(sr>dr || sc>dc)
              return;

	getMazePaths(sr + 1, sc, dr, dc, ans + " h");
	getMazePaths(sr, sc + 1, dr, dc, ans + " v");

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


	getMazePaths(1, 1, 3, 3, "");


///////////////////////end-........................

	return 0;

}