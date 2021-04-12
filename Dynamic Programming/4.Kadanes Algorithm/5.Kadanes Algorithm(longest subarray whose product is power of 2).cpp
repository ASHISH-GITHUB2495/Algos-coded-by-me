#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1073741824


bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;

	return (ceil(log2(n)) == floor(log2(n)));
}
//here we know that the product of numbers is power of 2 only if the numbers are also power of 2
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
	//int arr[] = { 2,5,4,4,6};
	int arr[]={2, 5, 4, 6, 8, 8, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

	int maxx = 0 , curr = 1;
	for (int i = 0; i < n; i++) {
		if (isPowerOfTwo(arr[i]))
			curr*=arr[i];
		else
			curr = 1;
		maxx = max(curr, maxx);
	}

	cout << maxx << endl;
///////////////////////end-.........................

	return 0;

}


