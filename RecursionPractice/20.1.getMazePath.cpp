#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


void getMazePaths(int sr, int sc, int dr, int dc,string op) {

	if (sr == dr && sc == dc) {
		cout<<op<<endl;
		return;
	 } 
	if(sr > dr || sc > dc)
	    return;


	getMazePaths(sr + 1, sc, dr, dc,op+" h");
	getMazePaths(sr, sc + 1, dr, dc,op+" v");

return ;
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

     getMazePaths(1,1,3,3,"");
	// vector<string> v = getMazePaths(1, 1, 3, 3);

	// for (auto i : v)
	// 	cout << i << endl;


///////////////////////end-........................

	return 0;

}