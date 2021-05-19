#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Total infected persons...
-----------------------------
you have given a graph ... and and infected person and infected time and end time...
return the no. of person got infected after end time;

input:
---------
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
6
1 3

output:
--------
Total persons got infected is 5



*/

int bfs(vector<int> adj[], vector<int> vis,  int src, int t, int e) {

	queue <int> q;
	q.push(src);
	vis[src] = 1;
	int time[vis.size()];
	time[src] = t;


	while (!q.empty()) {

		int top = q.front() ; q.pop();


		for (auto i : adj[top]) {
			if (vis[i] == 0) {
				vis[i] = 1;
				time[i] = time[top] + 1;
				q.push(i);
			}
		}



	}


	int count = 0;
	for (int i = 0; i < vis.size(); i++)
		if (time[i] <= e)
			count++;


	return count;

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
		adj[d].push_back(s);

	}

	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);

	int src, stime, etime;
	cin >> src >> stime >> etime;



	cout << "Total persons got infected is " << bfs(adj, vis, src, stime, etime) - 1 << endl;







///////////////////////end-.........................

	return 0;

}


