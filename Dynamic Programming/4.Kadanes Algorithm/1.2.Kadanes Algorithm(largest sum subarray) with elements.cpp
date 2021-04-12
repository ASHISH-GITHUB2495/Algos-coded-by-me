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
	int arr[] = {4, 3, -2, 6, -14, 7, -1, 4, 5, 7, -10, 2, 9, -10, -5, -9, 6, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
 
	vector <int> vCurr;
	vector<int> vBest;
	int currBest =  arr[0];vCurr.push_back(arr[0]);
	int maxBest = arr[0]; vBest.push_back(arr[0]);
	for (int i = 1; i < n; i++) {
		if (currBest + arr[i] < arr[i]) // if(currBest<0) both correct
			{currBest = arr[i];
              vCurr.erase(vCurr.begin(),vCurr.end());
              vCurr.push_back(arr[i]);
			}
		else
			currBest += arr[i] , vCurr.push_back(arr[i]);

		if(maxBest<=currBest){
            maxBest=currBest;
            vBest = vCurr;
		}
		
	}

	cout << maxBest << endl;
	for(auto i: vBest)
		cout<<i<<" ";


///////////////////////end-.........................

	return 0;

}


