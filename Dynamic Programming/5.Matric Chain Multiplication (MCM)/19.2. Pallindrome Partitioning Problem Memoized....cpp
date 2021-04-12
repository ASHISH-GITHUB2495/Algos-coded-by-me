#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824

/*
Pallindrome Partitioning problem .... Recursive meomozied dp....
*/
int dp[1000][1000]; // decleare constraing size of i and j..



bool isPallindrome(string s, int i, int j) {

	while (i <= j) {
		if (s[i] == s[j])
			i++, j--;
		else
			return false;
	}
	return true;
}



int PallindromePartitioningProblem(string s, int i, int j) {

	if(dp[i][j]!=-1)
		return dp[i][j];

	if (i >= j)
		return 0;

	if (isPallindrome(s, i, j))
		return 0;

  
	int minn = INT_MAX;
	for (int k = i; k < j; k++) {
		
		int temp = PallindromePartitioningProblem(s, i, k) + PallindromePartitioningProblem(s, k + 1, j) +1 ;
	
		minn = min(temp, minn);

		dp[i][j]=minn;

	}


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
//////////////////////////////////////start........
	memset(dp,-1,sizeof(dp));
	string s;
	cin >> s;

	cout << "minimum partition of pallindrome could be : " << PallindromePartitioningProblem(s, 0, s.size() - 1) << endl;



///////////////////////end-.........................

	return 0;

}


