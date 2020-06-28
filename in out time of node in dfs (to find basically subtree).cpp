#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 1000000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl

vector <int> *adj;
int *vis;
int *in;
int *out;
static  int timer = 1;


void dfs(int s)
{


	if (vis[s] == 0)
	{
		vis[s] = 1;
		cout << s << " ";
		in[s] = timer++;
	}

	for (int i = 0; i < adj[s].size(); i++)
	{
		if (vis[adj[s][i]] == 0)
		{
			dfs(adj[s][i]);

		}
	}
	out[s] = timer++;


}




int main()
{

//////////////////////////////////////start...............

	int n, e, u, v;
	cin >> n >> e;

	adj = new vector <int> [n + 1];
	vis = new int [n + 1];
	in = new int [n + 1];
	out = new int [n + 1];
	fill(vis, vis + n + 1, 0);

	for1(0, e)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].pb(u);

	}

	dfs(1);
	E;
	for (int i = 1; i <= n; i++)
		cout << "for " << i << "in->" << in[i] << " " << "out->" << out[i] << endl;

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

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
