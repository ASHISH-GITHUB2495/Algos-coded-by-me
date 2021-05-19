#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Is graph cyclic ...

 Basically you have given a graph and you have to find is graph contain a cycle or not

 input 1:
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

Output:
Yes,this graph contains cycle

input 2:
7 
6
0 1 
0 3
1 2 
2 5
5 6
4 6
0

output:
No,this graph does not contains the cycle

Approach .. basically if we get any visited array we will return false else true .. we will do it with bfs
*/

bool bfs(vector<int> adj[], vector<int> vis,  int src) {

	queue <int> q;
	vis[src] = 1;
	q.push(src);


	while (!q.empty()) {
		int elem = q.front() ; q.pop();

		for (auto i : adj[elem])
			if (vis[i] == 0)
				vis[i] = 1, q.push(i);
			else
				return true;


	}


	return false;



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


	if (bfs(adj, vis, src))
		cout << "Yes,this graph contains cycle";
	else
		cout << "No,this graph does not contains the cycle";







///////////////////////end-.........................

	return 0;

}


