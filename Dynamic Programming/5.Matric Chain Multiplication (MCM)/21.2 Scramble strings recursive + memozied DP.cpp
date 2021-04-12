#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

#define int long long
#define mod 1073741824

/*
Scrambled string recursive with memozied...DP

*/

unordered_map <string,bool> dp;

bool isScrambled(string a, string b) {

	if (a.compare(b) == 0)
		return true;
	if (a.length() <= 1)
		return false;


	string key=a;
	key.push_back('_');
	key.append(b);

	if(dp.find(key)!=dp.end())
          return dp[key];     
     
	int n = a.length();
	bool flag = false;
	for (int i = 1; i <= n - 1; i++) {

		bool cond1 = (isScrambled(a.substr(0, i), b.substr(n - i, i)) == true && isScrambled(a.substr(i, n - i), b.substr(0, n-i)) == true);
		bool cond2 = (isScrambled(a.substr(0, i), b.substr(0, i)) == true && isScrambled(a.substr(i, n - i), b.substr(i, n - i)) == true);



		if (cond1 || cond2)
		{
			flag = true;
			break;
		}

	}
    
	return dp[key]=flag;



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

	string a, b;
	cin >> a >> b;

 if(isScrambled(a, b))
 	cout<<"String is scrabled";
 else
 	cout<<"Strings are different";

///////////////////////end-.........................

	return 0;

}


