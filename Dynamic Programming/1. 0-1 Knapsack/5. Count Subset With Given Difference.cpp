#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

// This is question of counting subsets with given difference is same as
// the target sum problem of leetcode




int countSubsetGivenSum(vector<int> v, int sum) {

	int n = v.size();
	int dp[n + 1][sum + 1];

	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < sum + 1; j++) {
			if (i == 0)
				dp[i][j] = 0;
			if (j == 0)
				dp[i][j] = 1;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (v[i - 1] <= j)
				dp[i][j] = dp[i - 1][j - v[i - 1]] + dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j];

		}
	}

	return dp[n][sum];

}


int countSubsetWithGivenDifference(vector <int> v, int diff) {

	int sum = 0 ;
	int n = v.size();

	for (int i = 0; i < n; i++)
		sum += v[i];

	int s1 = (diff + sum) / 2;

	return countSubsetGivenSum(v, s1);

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

	int diff; cin >> diff;


	cout << countSubsetWithGivenDifference(v, diff)  << endl;


///////////////////////end-.........................

	return 0;

}


