#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Dijikstra algorithm...
-----------------------------
Here we gonna find the minium cost from src to dest with weight graph .. actually if the graph is not weighted
we can do this with bfs..
so, for weight we gonna do bfs with the priority queue ,where it keep both the current cost and node ,
if gonna implement the priority queue such that , the top all keep the lowest cost and node and we simply bfs it.


input:
---------
7
8
0 1 10
0 3 40
1 2 10
2 3 10
3 4 2
4 5 3
5 6 3
4 6 8
0 6

output:
--------
Total persons got infected is 5



*/


struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second < b.second;
    }
};




void  dijikstra(vector<pair<int, int>> adj[], vector<int> vis,  int src, int dest) {

	//in priority queue we keep the distand and node pair and whole distace is minimum we visit it first
	priority_queue <pair<int, int>,vector<pair<int,int>>,greater<pair<int, int>>> q;
	q.push({0, src});
	vis[src] = 1;

	string ans = "";
	while (!q.empty()) {

		auto top = q.top() ; q.pop();

		ans += to_string(top.second) + "->";

		if (top.second == dest){
					cout <<"Path is : " <<ans << endl;
					cout<<"Minimum Cost is :"<<top.first<<endl;
				}

		for (auto i : adj[top.second]) {
			if (vis[i.first] == 0) {
				
				vis[i.first] = 1;
				q.push({ top.first + i.second, i.first});
			}

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
	vector<pair<int, int>> adj[n];


	//we are taking input
	int s, d, w;
	for (int i = 0; i < e; i++) {
		cin >> s >> d >> w ;
		adj[s].push_back({d, w});
		adj[d].push_back({s, w});

	}

	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);

	int src, dest;
	cin >> src >> dest;


	dijikstra(adj, vis, src, dest);







///////////////////////end-.........................

	return 0;

}


