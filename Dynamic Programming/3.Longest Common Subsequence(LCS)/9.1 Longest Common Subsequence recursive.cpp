#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//LCS using only recursive approach




int LCS_recursive(string x,string y,int n,int m){
  
  if(n==0 || m==0)
  	return 0;

  if(x[n-1] == y[m-1])
  	return 1+LCS_recursive(x,y,n-1,m-1);
  else
  	return max(LCS_recursive(x,y,n-1,m) , LCS_recursive(x,y,n,m-1));



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
//////////////////////////////////////start............
	
	string s1,s2;
	cin>>s1>>s2;

	cout<<"Longest Common Subsequence is : "<<LCS_recursive(s1,s2,s1.size(),s2.size());




///////////////////////end-.........................

	return 0;

}


