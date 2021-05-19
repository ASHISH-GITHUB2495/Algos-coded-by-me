#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Is graph connected...
  --------------------
  Here in this question we have graph and we have to find the graph is connected or not..

  so, as in previous question we have counted connected question ..
  so in this is the connected component is only one .. we say the whole graph is
  connected else not connected

*/

void dfs(vector<int> & vis, vector<pair<int, int>> adj[], int src) {

	vis[src] = 1;

	for (auto i : adj[src]) {
		if (vis[i.first] == 0) {

			dfs(vis, adj, i.first);
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
	vector<pair<int, int>> adj[n];


//we are taking input
	int s, d, w;
	for (int i = 0; i < e; i++) {
		cin >> s >> d >> w;
		adj[s].push_back({d, w});
		adj[d].push_back({s, w});
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
	if (cnt == 1)
		cout << "whole graph is connected" << endl;
	else
		cout << "Not connected"<<endl;






///////////////////////end-.........................

		     return 0;

}


