#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824

/*
Boolean Paranthesis...
Evaluate boolean paranthesis to true..
----------
RECURSIVE
----------
Try examples:

T^F^T|T
T^T^F
T^F|F
T|T&F^T

*/
int dp[1000][1000]; // decleare constraing size of i and j..



int booleanParenthesis(string s, int i, int j, bool istrue) {

	if (i > j)
		return 0;

	if (i == j) {
		if (istrue)
			return (s[i] == 'T');
		else
			return (s[i] == 'F');
	}


	int ans = 0;

	for (int k = i + 1; k < j; k += 2) {

		int lt = booleanParenthesis(s, i, k - 1, true);
		int lf = booleanParenthesis(s, i, k - 1, false);
		int rt = booleanParenthesis(s, k + 1, j, true);
		int rf = booleanParenthesis(s, k + 1, j, false);

		if (s[k] == '&') {
			if (istrue)
				ans += lt * rt;
			else
				ans += (lt * rf) + (lf * rt) + (lf * rf);
		}

		if (s[k] == '|') {
			if (istrue)
				ans += (lt * rf) + (rf * rt) + (lt * rt);
			else
				ans += lf * rf;
		}

		if (s[k] == '^')
		{
			if (istrue)
				ans += (lt * rf) + (lf * rt);
			else
				ans += (lt * rt) + (lf * rf);
		}


	}


	return ans;




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
	memset(dp, -1, sizeof(dp));
	string s;
	cin >> s;

	cout << "Number of ways we can get true is : " << booleanParenthesis(s, 0, s.size() - 1, true) << endl;



///////////////////////end-.........................

	return 0;

}


