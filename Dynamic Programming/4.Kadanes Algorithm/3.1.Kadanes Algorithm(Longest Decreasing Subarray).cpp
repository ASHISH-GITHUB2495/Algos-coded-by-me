#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1073741824





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
    int arr[] = {5, 6, 3, 5, 7, 8, 9, 1, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

   int maxx = 1 , curr=1;
   for(int i=1;i<n;i++){
   	if(arr[i]<arr[i-1])
   		curr++;
   	else
   		curr=1;
   	maxx=max(curr,maxx);
   }
	
  cout<<maxx<<endl;
///////////////////////end-.........................

	return 0;

}


