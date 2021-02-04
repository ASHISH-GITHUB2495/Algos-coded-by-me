#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//using dp with recursion and memoization......



int dp[1000][1000];

bool subsetSum(vector <int> v, int n, int sum) {
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if(dp[n][sum]!=-1)
		return dp[n][sum];

	

	if (v[n - 1] <= sum)
		return dp[n][sum] = subsetSum(v, n - 1, sum - v[n - 1]) || subsetSum(v, n - 1, sum);
	else
		return  dp[n][sum] =subsetSum(v, n - 1, sum);


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

	int sum; cin >> sum;

    memset(dp,-1,sizeof(dp));


      if(subsetSum(v, n, sum))
               cout<<"Yess Possible"<<endl;
    else
      cout<<"NOt possible"<<endl;



///////////////////////end-.........................

	return 0;

}


