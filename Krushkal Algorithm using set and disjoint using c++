#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
vector <int> *adj;
int xcent;
int ycent;
int n;
int *vis;
int *path;


class Test
{
public:
	int w;
	int u;
	int v;

	bool operator < (  Test const &rhs)const {
		return (w < rhs.w);
	}
	bool operator > (  Test const &rhs)const {
		return (w > rhs.w);
	}
};
int find_set(int i)
{	if (i == path[i])
		return i;
	else
		return find_set(path[i]);

}
void union_set(int u, int v)
{
	path[u] = path[v];
}




int main()
{

	clock_t tStart = clock();
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
	int n;
	cin >> n;         //number of nodes.......
	path = new int [n];
	adj = new vector <int> [n];
	int e;
	cin >> e;
	vector <pair<int, pair<int, int>>> s;
	int u, v, w;
	for (int i = 0; i < e; i++)
	{
		cin >> w >> u >> v;
		s.pb({w, { u, v}});

	}
	for (int i = 0; i < n; i++)
	{
		path[i] = i;
	}
	int sum = 0;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++)
	{	u = s[i].second.first; w = s[i].first; v = s[i].second.second;
		int uk = find_set(u);
		int vk = find_set(v);

		if (uk != vk )
		{
			adj[u].pb(v);
			//adj[v].pb(u);
			union_set(uk, vk);
			sum = sum + w;
			cout << u << " " << v << endl;
		}
	}

	cout << endl << "minimum spanning tree weight is" << sum << endl;


	/*for(auto i : s)
	{  w=i.w;
		u=i.u;
		v=i.v;
		if()
	}*/





/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
