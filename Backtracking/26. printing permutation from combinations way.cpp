#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* printing permutation .. suppose you have given .. n and r
no. of ways + arragement .. n!/((n-r)!);
input : n=3 ,r=2;
output:  120
         210
         201
         102
         021
         012
    In combinations way
*/

void solve( int curr_box,int n,int numUsed[],int ritem,int r,string ans) {
  
  if(curr_box==n){
  	if(ritem == r)
  	cout<<ans<<endl;
  	return;
  }


  for(int i=1;i<=r;i++){
  	if(numUsed[i]==0){
  		numUsed[i]=1;
  		solve(curr_box+1,n,numUsed,ritem+1,r,ans+to_string(i));
  		numUsed[i]=0;
  	}
  }

  solve(curr_box+1,n,numUsed,ritem,r,ans+to_string(0));


      

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
	int n, r;
	cin >> n >> r;

	int boxes[n];
	for (int i = 0; i < n; i++) boxes[i] = 0;

	int numUsed[r + 1];
	for (int i = 1; i <= r;i++) numUsed[i] = 0;


	solve( 0,n,numUsed,0,r,"");




///////////////////////end-........................

	return 0;

}