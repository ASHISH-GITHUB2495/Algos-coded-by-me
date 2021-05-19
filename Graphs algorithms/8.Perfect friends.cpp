#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Prefect friends ...
you have given n which is number of friends and k where the pairs of connected friend with each other

you have to find prefect friends. that the groups of friend who are connected.

That is basically we have to count connected components..

example input:7
              5
	          0 1
              2 3
              4 5
              5 6
              4 6
output : Total perfect friends are : 3

*/

void dfs(vector<int> & vis, vector<int> adj[], int src) {

	vis[src] = 1;

	for (auto i : adj[src]) {
		if (vis[i] == 0) {

			dfs(vis, adj, i);
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
    //we declare adjacency list
	vector<int> adj[n];


    //we are taking input
	int s, d, w;
	for (int i = 0; i < e; i++) {
		cin >> s >> d ;
		adj[s].push_back(d);

	}


	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (vis[i] == 0) {
			cnt++;
			dfs(vis, adj, i);

		}
	}

	cout << "Total perfect friends are : " << cnt << endl;






///////////////////////end-.........................

	return 0;

}


