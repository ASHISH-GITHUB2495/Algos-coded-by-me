#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


bool checkPallindrom(string str) {
		
	for (int i = 0; i < str.size() / 2; i++)
		if (str[i] != str[str.size() - i - 1])
			return false;
  
	return true;
}

void solve(string str, int idx, string ans,int n) {
	if (idx == n) {
		cout << ans << endl;
		return;
	}


  //we only take out pallindrome character
	for (int i = 0; i <= str.size()-idx; i++) {
		if (checkPallindrom(str.substr(idx, i+1))) {
			solve(str,idx+i+1, ans + "(" + str.substr(idx, i+1) + ")",n);

		}
	}



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
	string str;
	cin >> str;

	solve(str, 0, "",str.size());


///////////////////////end-........................

	return 0;

}