#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007
/*
Here you have given the maze ie, its size and also the possible direction 
v-> down, h-> right,d->diagonal.    1 to n jumps allowed ... 



*/


vector<string> getMazePaths(int sr, int sc, int dr, int dc) {

	if (sr == dr && sc == dc) {
		vector<string> v;
		v.push_back("");
		return v;
	}
	if (sr > dr || sc > dc) {
		vector<string> v;
		return v;
	}
	vector <string> ans;
	for (int i = 1; i <= dc; i++) {
		vector <string> paths1 = getMazePaths(sr + i, sc, dr, dc);
		for (auto p : paths1)
			ans.push_back("h" + to_string(i)+" " + p);
	}
	for (int i = 1; i <= dr; i++) {
		vector <string> paths2 = getMazePaths(sr, sc + i, dr, dc);
		for (auto p : paths2)
			ans.push_back("v" + to_string(i) +" "+ p);
	}
	for (int i = 1; i <= max(dr, dc); i++) {
		vector<string> paths3 = getMazePaths(sr + i, sc + i, dr, dc);
		for (auto p : paths3)
			ans.push_back("d" + to_string(i) +" "+ p);
	}


	//vector <string> paths


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


	vector<string> v = getMazePaths(1, 1, 4, 4);
	for (auto i : v)
		cout << i << endl;


///////////////////////end-........................

	return 0;

}