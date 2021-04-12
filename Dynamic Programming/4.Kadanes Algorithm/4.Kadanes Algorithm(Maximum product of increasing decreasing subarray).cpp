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
	//int v[] = { 1, 2, 10, 8, 1, 100, 101 };
	int v[] = { 1, 5,7,2,10,12 };
	int n = sizeof(v) / sizeof(v[0]);
	int currBest , maxBest = INT_MIN;
	int flag = 0; //not increase or decrease
	for (int i = 1; i < n; i++) {
		if (flag == 0) {
			if (v[i] > v[i - 1])
				flag = 1;
			else
				flag = -1;

			currBest = v[i] * v[i - 1];
		}
		else {
			if (flag == 1) {
				if (v[i] >= v[i - 1])
					currBest *= v[i];
				else
					currBest = v[i - 1] * v[i], flag = -1;
			}
			else {
				if (v[i] < v[i - 1])
					currBest *= v[i];
				else
					currBest = v[i - 1] * v[i], flag = 1;

			}
			maxBest = max(maxBest, currBest);
		}
	}

	cout<<maxBest<<endl;

///////////////////////end-.........................

	return 0;

}


