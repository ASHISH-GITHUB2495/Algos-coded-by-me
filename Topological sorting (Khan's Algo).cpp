#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000

//KHANS ALGORITHM FOR TOPOLOGICAL SORTING IN O(e+v)

vector <int> *adj;
int *vis;
int *in;
vector <int> res;

void KhansAlgo (int n)
{

	queue <int> q;

	for1(1, n + 1)
	if (in[i] == 0)
		q.push(i);
	while (!q.empty())
	{
		int front = q.front(); q.pop();
		res.pb(front);

		for (int i = 0; i < adj[front].size(); i++)
		{
			in[adj[front][i]]--;  //removing edge


			if (in[adj[front][i]] == 0)
				q.push(adj[front][i]); //removing node
		}
	}

	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";



}

int main()
{

//////////////////////////////////////start...............
	int n, e, u, v;
	cin >> n >> e;

	adj = new vector <int> [n + 1];
	in = new int [n + 1];
	fill(in, in + n + 1, 0);

	for (int i = 0; i < e; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		in[v]++;

	}
	KhansAlgo(n);




	/////////////////////////////end.......................................

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
