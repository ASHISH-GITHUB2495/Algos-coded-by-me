#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//fibonacci -> recursion + memoization

int fibmemo[100];
int fibonacci(int n){
	if(n==0||n==1)
		return n;
	if(fibmemo[n]!=0)
		return fibmemo[n];
	return fibmemo[n]= fibonacci(n-1)+fibonacci(n-2);
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
  int n;
  cin>>n;
  for(int i=0;i<=n;i++)fibmemo[i]=0;
  cout<<fibonacci(n)<<endl;

///////////////////////end-........................

	return 0;

}