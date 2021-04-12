#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1073741824

/*
we have to find the maximum sum ... by fliping subarray sign... i-j is subarray part
ie..max( totalSum - sum(arr[i-j])+ sum(fillpedArr[i-j]));
=> ie fillpedArr(i-j) = -sum(arr[i-j])
=>now -> max(totalSum-2*sum(arr[i-j]))



//now,here we have to actually find the max sum of subarry i-j ie,
// when we subtract it from total_sum it will be minimum

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
//////////////////////////////////////start........

	int arr[] = { 1, 2, -10, 2, -20};
	int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum=0;int brr[n];

    for(int i=0;i<n;i++)
    	totalSum+=arr[i], brr[i]=-2*arr[i];

   
   
	int maxx = brr[0], curr = brr[0];
	for (int i = 1; i < n; i++) {
		if (curr+brr[i]<brr[i])
			curr = brr[i];
		else
			curr +=brr[i];
		maxx = max(curr, maxx);
	}
    maxx += totalSum;
	maxx = max(totalSum,maxx);

	cout << maxx << endl;
///////////////////////end-.........................

	return 0;

}


