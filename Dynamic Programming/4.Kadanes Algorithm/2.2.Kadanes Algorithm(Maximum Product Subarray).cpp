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
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int maxx = arr[0] , curr = arr[0];
	for (int i = 1; i < n; i++) {
        if(curr*arr[i]!=0)
        	curr*=arr[i];
        else
        	curr=arr[i];
        maxx=max(curr,arr[i]);
	}

	cout << maxx << endl;
///////////////////////end-.........................

	return 0;

}


