#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000
#define IOS ios_base:: sync_with_stdio(false);cin.tie(0);
//ACTUALLY DIJKSTRA'S ALGORITHM USED FOR FINDING SHORTEST PATH FROM ONE SOURCE TO ALL THE VERTICES OF THE GRAPH......

int n;          //number of vertices
vector <int> *adj;     //adjlist containing actual weighted graph
int *in;
int *low;                       //store the shortest path from src to all the vertex
int *vis;                       //marks the vertex is visited;

int timer;    // globally default to 0

void dfs (int s, int par)
{
	vis[s] = 1;
	in[s] = low[s] = timer;
	timer++;

	for (int i = 0; i < adj[s].size(); i++)
	{
		if (adj[s][i] == par)
			continue;

		if (vis[adj[s][i]] == 1)
		{
			low[s] = min(low[s], in[adj[s][i]]);
			// curr node = min of curr node and decendent node

		}
		else
		{
			dfs(adj[s][i], s);

			if (low[adj[s][i]] > in[s])
				cout << s << "-" << adj[s][i] << " is a bridge. \n";

			low[s] = min(low[s], low[adj[s][i]]);


		}



	}





}





int main()
{

//////////////////////////////////////start...............
	//many of the variables are declared globally for not passing to functions.....

	int m, x, y;
	cin >> n >> m;          // input of no. of nodes and edges

	adj = new vector <int> [n + 1];
	in = new int [n + 1];
	low = new int [n + 1];
	vis = new int [n + 1];

	for1(0, m)
	cin >> x >> y , adj[x].pb(y) , adj[y].pb(x);


	dfs(1, -1);










/////////////////////////////end................................... ....


	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

