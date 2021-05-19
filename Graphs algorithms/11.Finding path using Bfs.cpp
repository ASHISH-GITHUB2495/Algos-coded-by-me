#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* BFS : breadth first search ...
   here you have given a graph where you have to traverse its breadh ,ie, level wise search ...

input:

7 
9
0 1 
0 3
1 2 
2 3
3 4
4 5
2 5
5 6
4 6
0

OUtput:
The Bfs traversal of given graph is:
0-1-3-2-4-5-6-
   
*/

void bfs(vector<int> adj[], vector<int> vis,  int src) {

	queue <int> q;
	vis[src] = 1;
	q.push(src);
	string  ans = to_string(src) + "-";

	while (!q.empty()) {
		int elem = q.front() ; q.pop();

		for (auto i : adj[elem])
			if (vis[i] == 0)
				ans += to_string(i)+"-" , vis[i] = 1, q.push(i);


	}

	cout << ans << endl;
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
	int s, d;
	for (int i = 0; i < e; i++) {
		cin >> s >> d ;
		adj[s].push_back(d);

	}

	int src;
	cin >> src;

	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);

   cout<<"The Bfs traversal of given graph is:"<<endl;
	bfs(adj, vis, src);






///////////////////////end-.........................

	return 0;

}


