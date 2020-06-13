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

int findMinVertex()
{
	int min = -1;

	for (int i = 0; i < n; i++)
	{
		if (vis[i] == false && ( min == -1 || dist[i] < dist[min]))
			min = i;
	}

	return min;
}


void dijkstra (  int src) // actual dijkstra algorithm
{

	fill(dist, dist + n, 999);
	fill(vis, vis + n, 0);

	dist[src] = 0; //src to src should be zero

	for (int i = 0; i < n ; i++) //or may be n-1 because when at n-1 vertex all of then should be already visited;
	{
		int min = findMinVertex();
		vis[min] = true;

		for (int j = 0; j < adj[min].size(); j++)
		{
			if (!vis[adj[min][j].first])
			{
				int newDist = dist[min] + adj[min][j].second;

				if (newDist < dist[adj[min][j].first])
					dist[adj[min][j].first] = newDist;



			}
		}




	}


        cout<<"nodes"<<"   "<<"distances"<<endl;
        cout<<"---------------------------\n";
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

