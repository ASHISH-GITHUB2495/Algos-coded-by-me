#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Prefect friends ...
you have given n number of nodes and e number of edges 
and from next line e time src to dest and weight.

input examle: 7 5
	          0 1 10
              2 3 10
              4 5 10
              5 6 10
              4 6 10
output : 0->1->
         2->3->
         4->5->6->
         Number of connected components are : 3

Here we will send every unvisited node to the dfs .. and count how many times 
we have send it to the dfs.

*/

void dfs(vector<int> & vis,vector<pair<int, int>> adj[], int src) {

	vis[src] = 1;

    cout<<src<<"->";

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
			cout<<endl;
		}
	}

	cout << "Number of connected components are : " << cnt << endl;






///////////////////////end-.........................

	return 0;

}


