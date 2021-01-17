#include<bits/stdc++.h>
using namespace std;

/* kth symbol in grammer LEET CODE ... */


int solve(int n,int k) {   
  
  if(n==1 && k==1)
  	return 0;
  int mid = pow(2,n-1) / 2;
  if(k<=mid)
  	return solve(n-1,k);
  else
  	return !solve(n-1,k-mid);


}
/*
pattern

n=1 0 
n=2 0 1
n=3 0 1 1 0
n=4 0 1 1 0 1 0 0 1
n=5 0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0
  
 k=1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16


*/


int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	int n,k;
	cin>>n>>k;
	cout<<solve(n,k)<<endl;

///////////////////////end-.........................

	return 0;

}


