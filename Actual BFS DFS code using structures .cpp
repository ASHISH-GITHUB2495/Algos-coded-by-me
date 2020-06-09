//this programm is written to demonstrate the working of bfs of a graph
//we are going to use the boolean array to represent visited or not and the queue to process visit
#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
   list <int> *adj;
public :
	   Graph(int v);
	  void addEdge(int v, int w);
	  void BFS(int s);
	  void DFS(int s);
	  	
	
};

Graph :: Graph (int V)
 {
 	this->V=V;
      adj=new list<int>[V] ;
 }
 
 void Graph :: addEdge(int v,int w)
  {
  	adj[v].push_back(w);
  	
  }
  void Graph::BFS(int s) 
  {
  	bool *visited=new bool[V];
  	for(int i=0;i<V;i++)
  	   visited[i]=false;
  	   
  	   list <int> queue;
  	   
  	visited[s]=true;
	  queue.push_back(s);   
  	
  	list <int> :: iterator i;
  	
  	while(!queue.empty())
  	{
  		s=queue.front();
  		cout<<s<<" ";
  		queue.pop_front();
  		
  		for( i=adj[s].begin();i!=adj[s].end();i++)
  		 {
  		 	if(!visited[*i])
  		 	 { visited[*i]=true;
  		 	   queue.push_back(*i);
  		 	 	
				}
		   }
  		
	  }
}

void Graph :: DFS(int s)
{  bool visited[V]={0};
	stack <int> stack;
	stack.push(s);
	while(!stack.empty())
	 { auto s=stack.top();stack.pop();
	 	if(!visited[s])
	 	{ 
		 cout<<s<<" ";
		 visited[s]=true;
	 	  for(auto i : adj[s])
	 	   {
	 	   	if(!visited[i])
	 	   	  stack.push(i);
			}
	 		
	 		
		 }
	 	
	 	
	 }
	
	
	
	
	
	
	
	
	
}
int main()
{  int v;

	Graph graph(4);
	graph.addEdge(0,1);
	graph.addEdge(0,2);
	graph.addEdge(1,2);
	graph.addEdge(2,0);
	graph.addEdge(2,3);
    graph.addEdge(3,3);
     graph.BFS(2);cout<<endl;
     graph.DFS(2);
     
     
     return 0;

}
  	
  	
  	
  	
  
