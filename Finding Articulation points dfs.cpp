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
int n;
vector <int> *adj;
int *vis;
int *in;
int *low;
int timer;

vector <int> ArtPoint;



void dfs(int s, int par = -1)
{
	vis[s] = 1;
	in[s] = low[s] = timer;
	timer++;

	int children = 0;

	for1(0, adj[s].size())
	{
		if (adj[s][i] == par)
			continue;

		if (vis[adj[s][i]] == 1)
		{


			low[s] = min(low[s], in[adj[s][i]]);


		}
		else
		{
			dfs(adj[s][i], s);

			low[s] = min(low[s], low[adj[s][i]]);

			if (low[adj[s][i]] >= in[s] && par != -1)
				ArtPoint.pb(s);

			++children;



		}




	}

	if (par == -1 && children > 1)
		ArtPoint.pb(s);





}





int main()
{


//////////////////////////////////////start...............
	//many of the variables are declared globally for not passing to functions.....

	int e, u, v;
	cin >> n >> e;


	adj = new vector <int> [n + 1];
	vis = new int [n + 1];
	low = new int [n + 1];
	in = new int [n + 1];

	fill(vis, vis + n + 1, 0);
	fill(low, low + n + 1, -1);
	fill(in, in + n + 1, -1);


	while (e--)
		cin >> u >> v  , adj[u].pb(v)  , adj[v].pb(u);




	dfs(1, -1);

	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == 0)
		{
			dfs(i);
		}
	}
	cout << "Articulation Points-------\n";
	for (int i = 0; i < ArtPoint.size(); i++)
		cout << ArtPoint[i] << endl;







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

