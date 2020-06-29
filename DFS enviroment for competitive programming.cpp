#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> *v;
int vis[100];
void dfs(int k)
{  
if( vis[k] == 0)
	{ vis[k]=1;
	  cout<<k<<"->";
	}
	
	
 int child;

	int i;
	for(i=0;i<v[k].size();i++)
	{
		child=v[k][i];
		if(vis[child]==0)
			dfs(child);
	}

}
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	v=new vector <int> [n+1];

	for(int i=0;i<=n;i++)
		vis[i]=0;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
		
	}
	dfs(1);
	
	
}
