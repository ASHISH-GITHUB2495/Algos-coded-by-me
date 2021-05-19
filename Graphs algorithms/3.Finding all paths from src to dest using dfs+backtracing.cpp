#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
Here you have given total node and edges.. and weights..
also src and dest is given to you ..
you have to find all the paths from src to dest.

example input:
7 8
0 1 10
1 2 10
2 3 10
0 3 10
3 4 10
4 5 10
5 6 10
4 6 10
0 6

try it yourself using drawing the tree of above example and previous questoin..
approach the question then watch the video.. it will be interesting 




Hint: Backtracking...

*/





//here we are also neighbour of our neighbour so we use visited array..
void totalPaths(vector<pair<int, int>> v[], int vis[], int src, int des, string ans) {

	vis[src] = 1;

	if (src == des) {
		cout << ans <<"stop"<<endl;
		return;
	}


	for (auto i : v[src]) {
		if (vis[i.first] == 0) {
			totalPaths(v, vis, i.first, des, ans + to_string(i.first) + "-> ");
			vis[i.first] = 0;
		}

	}

	return;



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
//////////////////////////////////////start............
	int n, e;
	cin >> n >> e;
//  we declare adjacency list
	vector<pair<int, int>> v[n];


//we are taking input
	int s, d, w;
	for (int i = 0; i < e; i++) {
		cin >> s >> d >> w;
		v[s].push_back({d, w});
		v[d].push_back({s, w});
	}

	int src, des;
	cin >> src >> des;

	int vis[n];
	for (int i = 0; i < n; i++)
		vis[i] = 0;



	totalPaths(v, vis, src, des, "0-> ");



///////////////////////end-.........................

	return 0;

}


