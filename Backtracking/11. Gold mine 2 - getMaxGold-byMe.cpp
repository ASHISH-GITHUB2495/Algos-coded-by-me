#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Gold mine 2 ... find path with maximum gold
/*
You have given a grid with numbers .. 
 you cannot visit cell which is zero gold..
 you cannot collect twice the gold...
 you have to give path with maximum gols.

 sample input: 
 7 7
10 0 100 200 0  8  0
20 0 0   0   0  6  0
30 0 0   9   12 3  4
40 0 2   5   8  3  11
0  0 0   0   0  9  0
5  6 7   0   7  4  2
8  9 10  0   1  10 0

*/
int n,m;
int mine[1000][1000];
int vis[1000][1000];


 int getMaxGold(int r,int c){
  	vis[r][c]=1;
 	if(r==n-1&&c==m-1){
 		if(mine[r][c]!=0)
 			return mine[r][c];
 		else
 			return 0;
 	}
   
   int gold=0;
   gold += mine[r][c];
  




   if(r-1>=0 && mine[r-1][c]!=0 && vis[r-1][c]==0)
   	 gold += getMaxGold(r-1,c);

   if(r+1<n && mine[r+1][c]!=0 && vis[r+1][c]==0)
   	 gold += getMaxGold(r+1,c);

   if(c-1>=0 && mine[r][c-1]!=0 && vis[r][c-1]==0)
   	 gold += getMaxGold(r,c-1);

   if(c+1<m && mine[r][c+1]!=0 && vis[r][c+1]==0)
   	 gold += getMaxGold(r,c+1);


return gold;

}



int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start........
   cin>>n>>m;
   for(int i=0;i<n;i++)
   	 for(int j=0;j<m;j++)
   	 	cin>>mine[i][j],vis[i][j]=0;

  int maxx=INT_MIN;
   for(int i=0;i<n;i++){
   	for(int j=0;j<m;j++){
   		if(vis[i][j]==0 && mine[i][j]!=0){
   			int curr =getMaxGold(i,j);
   			maxx=max(maxx,curr);
   			cout<<curr<<endl;

   		}
   	}
   }


	cout<<maxx<<endl;


///////////////////////end-........................

	return 0;

}