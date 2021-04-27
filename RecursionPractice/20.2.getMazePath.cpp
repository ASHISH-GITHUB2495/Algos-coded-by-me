#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


vector<string> getMazePaths(int sr, int sc, int dr, int dc) {

	if (sr == dr && sc == dc) {
		vector<string> v;
		v.push_back("");
		return v;
	}
	if (sr > dr || sc > dc){
       vector<string> v;
		return v;
	}


	vector <string> paths1 = getMazePaths(sr + 1, sc, dr, dc);
	vector <string> paths2 = getMazePaths(sr, sc + 1, dr, dc);

	vector <string> ans;

	for (auto i : paths1)
		ans.push_back("h " + i);

	for (auto i : paths2)
		ans.push_back("v " + i);


	return ans;

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


	vector<string> v = getMazePaths(1, 1, 3, 3);
	for (auto i : v)
		cout << i << endl;


///////////////////////end-........................

	return 0;

}