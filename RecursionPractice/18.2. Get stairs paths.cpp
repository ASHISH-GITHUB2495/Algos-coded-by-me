#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//without storing the paths only print
void  solve(int n,string ans) {

  if(n<=0){
  	if(n==0)
  		cout<<ans<<endl;
  	return ;
  }


      solve(n-1,ans+" 1");
      solve(n-2,ans+" 2");
      solve(n-3,ans+" 3");

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

solve(4,"");

///////////////////////end-........................

	return 0;

}