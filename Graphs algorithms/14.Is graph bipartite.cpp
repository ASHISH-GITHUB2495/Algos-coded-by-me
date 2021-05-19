#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Is Bipartite Graph ...
  Bipartite : A graph is said to be bipartite if it is posstible to devide its verticies into two inclusive and
  exhaustive subset ans all the edges accross the sets.

  so, basically we have to devide the vertices into two sets such that the edges must be only accross the sets.






  Approach ..: The approach is with bfs.. at every level we put vertices into same set and next level we put it to another set
  again next we put in previous set..and so on...

  so , after this we gonna find if any vertices are in both then it is not bipartite otherwiese it is  bipartite graph



*/

bool bfs(vector<int> adj[],  int src) {

	queue <pair<int,int>> q;  //each time queue will keep the node and level

	q.push({src,0});
  

	//here we define two set and counter for level .. if counter is even we put in first set otherwise we put in 2nd set
	set<int>s1;
	set<int>s2;
	s1.insert(src);


	while (!q.empty()) {

		auto top = q.front() ; q.pop();
        if(top.second%2==0)
        	s1.insert(top.first);
        else
        	s2.insert(top.first);

		for (auto i : adj[top.first]) {

		 q.push({i,top.second+1});
			

		}



	}

  //now we have to find any element is in both sets
	unordered_map <int,int> u;

	for (auto i : s1)
       u[i]++;

	for (auto i : s2)
		u[i]++;

    
    for(auto i: u)
    	if(i.second==2)
    		return false;


	return true;



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


	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);


	if (bfs(adj,0))
		cout << "Yes,The graph is Bipartite Graph";
	else
		cout << "No,This graph is not bipartite graph";







///////////////////////end-.........................

	return 0;

}


