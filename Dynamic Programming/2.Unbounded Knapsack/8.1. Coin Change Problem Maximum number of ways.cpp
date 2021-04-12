#include<iostream>
using namespace std;

#define int long long
#define mod 1073741824

/*
 similarity of coin change problem with count subset sum but with unbounded...

*/

long long coinsChangeWays(long long coins[], long long n , long long sum) {

	long long dp[n + 1][sum + 1];


   for(long long i=0;i<n+1;i++)
   	for(long long j=0;j<sum+1;j++){
   		if(i==0)
   			dp[i][j]=false;
   		if(j==0)
   			dp[i][j]=true;

   	}

  	for(long long i=1;i<n+1;i++){
   		for(long long j=1;j<sum+1;j++){
   			if(coins[i-1]<=j)
   				dp[i][j]=dp[i][j-coins[i-1]] + dp[i-1][j];
   			else
   				dp[i][j]=dp[i-1][j];
   		}
   	}
 
	return dp[n][sum];


}


int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	long long t;
	cin>>t;
	while(t--){
		long long n=3; long long sum; // nubmer of coins and sum required
		
		cin >> sum;
	   sum+=1;
		long long coins[n];
		for (long long i = 0; i < n; i++)
			coins[i]=i+1;
	
	
		cout <<coinsChangeWays(coins, n , sum) << endl;
	}

///////////////////////end-.........................

	return 0;

}


