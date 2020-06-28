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
vector <pair<int, int>> *adj;     //adjlist containing actual weighted graph
int *dist;                       //store the shortest path from src to all the vertex
bool *vis;                       //marks the vertex is visited;

set <pair <int, int> > setd;


void dijkstra (  int src) // actual dijkstra algorithm
{

	fill(dist, dist + n, 999);
	fill(vis, vis + n, 0);

	dist[src] = 0; //src to src should be zero

	setd.insert({0, src}) ; //distance from src and node no.


	while (!setd.empty())
	{
		

		pair <int, int> min = *(setd.begin());    // the minimum distance in set lie at first;

		int currNode = min.second;

		vis[currNode] = true;

		setd.erase(setd.begin());

		for (int j = 0; j < adj[currNode].size(); j++)
		{
            
               

			if (!vis[adj[currNode][j].first])
			{  int weight= adj[currNode][j].second;
				int newDist = dist[currNode] + weight;

				if (newDist < dist[adj[currNode][j].first])
				{	dist[adj[currNode][j].first] = newDist;
					setd.insert({newDist, adj[currNode][j].first});

				}



			}
		}



	}




	cout << "nodes" << "   " << "distances" << endl;
	cout << "---------------------------\n";
	for (int i = 0; i < n; i++)
		cout << i << "     " << dist[i] << endl;


}




int main()
{

//////////////////////////////////////start...............
	//many of the variables are declared globally for not passing to functions.....
	int e;
	cin >> n >> e;
	dist = new int [n];
	vis = new bool [n];
	adj = new vector<pair<int, int>> [n];

	int u, v, w;
	for1(0, e)
	{
		cin >> u >> v >> w;
		adj[u].pb({v, w});
		adj[v].pb({u, w});
	}

	dijkstra(0);

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

