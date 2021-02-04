#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

//using top-down dp approach

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

	int dp[n + 1][sum + 1];

	memset(dp, -1, sizeof(dp));

   for(int i=0;i<n+1;i++)
   	for(int j=0;j<sum+1;j++){
   		if(i==0)
   			dp[i][j]=false;
   		if(j==0)
   			dp[i][j]=true;

   	}

   	for(int i=1;i<n+1;i++){
   		for(int j=1;j<sum+1;j++){
   			if(v[i-1]<=j)
   				dp[i][j]=dp[i-1][j-v[i-1]] || dp[i-1][j];
   			else
   				dp[i][j]=dp[i-1][j];
   		}
   	}

      if(dp[n][sum])
               cout<<"Yess Possible"<<endl;
    else
      cout<<"NOt possible"<<endl;



///////////////////////end-.........................

	return 0;

}


