//Demontration for bfs of a graph
#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
vector <int> *adj;
bool *visited;
void bfs(int s)
 {
 	queue <int> q;
 	q.push(s);
 	visited[s]=true;
 	 cout<<s<<" ";
 	 while(!q.empty())
 	  { int curr=q.front();
 	      q.pop();
 	  	for(auto i : adj[curr])
 	  	  {
 	  	  	if(!visited[i])
 	  	  	   {
 	  	  	   	visited[i]=true;
 	  	  	   	cout<<i<<" ";
 	  	  	   	  q.push(i);
					}
			 }
	   }
 }
int main()
{
	int n,e,u,v;
	cin>>n>>e;
	adj=new vector <int> [n];
	visited=new bool [n];
	 for(int i=0;i<n;i++)
	   visited[i]=false;
	   
	for(int i=0;i<e;i++)
	  { cin>>u>>v;
	  adj[u].push_back(v);
	  }
	   bfs(0);
	  return 0;
}
