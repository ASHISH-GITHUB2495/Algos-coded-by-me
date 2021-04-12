#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824



int minimumSubsetSumDifference(vector <int> v) {

	int sum = 0; int n = v.size();

	for (int i = 0; i < n; i++)
		sum += v[i];                   // taking whole sum of array

	int dp[n + 1][sum + 1];            // creating subset sum table

	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < sum + 1; j++)
		{
			if (i == 0)
				dp[i][j] = false;
			if (j == 0)
				dp[i][j] = true;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (v[i - 1] <= j)
				dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	vector <int> vv;       // getting elements with are valid with one part
	for(int i=0;i<(sum+1)/2;i++)
		if(dp[n-1][i])
		vv.push_back(i);

    int minn=INT_MAX;  
	for(int i=0;i<vv.size();i++)   //Finding minimum difference
		minn = min(minn,sum-(2*vv[i]));

	return minn;


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
	int n;
	cin >> n;

	vector <int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];


	cout << minimumSubsetSumDifference(v) << endl;


///////////////////////end-.........................

	return 0;

}


