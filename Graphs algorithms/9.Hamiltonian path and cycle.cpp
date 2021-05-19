#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* Hamiltonian Path and cycle  ...
 you have given a graph you have to find hamilonian path or cyle if any ...
 Hamiltonian path -> its a path from src to any node via visited all node wihout haveing edge from src to dest
 Hamiltonian cycle -> its a hamilonian path where their is edge between src to dest.
    example input:
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
     
     output :

0-1-2-3-4-5-6-
Hamiltonian Path
0-1-2-3-4-6-5-
Hamiltonian Path
0-1-2-5-4-3-
its not Hamiltonian
0-1-2-5-4-6-
its not Hamiltonian
0-1-2-5-6-4-3-
Hamiltonian cycle
0-3-2-1-
its not Hamiltonian
0-3-2-5-4-6-
its not Hamiltonian
0-3-2-5-6-4-
its not Hamiltonian
0-3-4-5-2-1-
its not Hamiltonian
0-3-4-5-6-
its not Hamiltonian
0-3-4-6-5-2-1-
Hamiltonian cycle

*/

void hamiltonian(vector<int> adj[], vector<int> vis,  int src, int actualSource, string ans) {


	int isLast = 1; int isNeibourOfSrc = 0;
	for (auto i : adj[src]) {
		if (vis[i] == 0) {
			vis[i] = 1;
			hamiltonian( adj, vis, i, actualSource, ans + to_string(i) + "-");
			vis[i] = 0;
			isLast = 0;
		}
		if (i == actualSource)
			isNeibourOfSrc = 1;
	}

   
   // Here we have just used to parameters ,ie, isLast which their is no unvisited neibour 
	//and isNeibourOfSrc says the src and dest are connected


	if (isLast == 1) {
		//Now here we are checking if its the last node , is all the nodes are visted 
		for (int i = 0; i < vis.size(); i++)
			if (vis[i] == 0) {
				cout << ans << endl << "its not Hamiltonian" << endl;
				return;
			}
		//now we check if hamiltonian path or cycle...
		if (isNeibourOfSrc)
			cout << ans << endl << "Hamiltonian cycle" << endl;
		else
			cout << ans << endl << "Hamiltonian Path" << endl;

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
	int s, d;
	for (int i = 0; i < e; i++) {
		cin >> s >> d ;
		adj[s].push_back(d);
		adj[d].push_back(s);

	}
	int src;
	cin >> src;

	vector<int> vis;
	for (int i = 0; i < n; i++)
		vis.push_back(0);

	vis[src] = 1;
	hamiltonian(adj, vis, src, src, to_string(src) + "-");






///////////////////////end-.........................

	return 0;

}


