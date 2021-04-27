#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*Words k selection -1 : Here you have given string with multiple chars
you have to select k distinct chars ...no permutation allowed
example input: aaabbccddde
				3

	   output:abc
              abd
			  abe
			  acd
		      ace
		      ade
              bcd
			  bce
			  bde
			  cde


*/


void solve(string str, int r, int idx, string ans) {
	if (idx == str.size()) {
		if (ans.size() == r)
			cout << ans << endl;
		return;
	}


	solve(str, r, idx + 1, ans + str[idx]);
	solve(str, r, idx + 1, ans);


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
	int r;
	cin >> r;
	//getting distinct chars
	set <char> s;
	for (auto i : str)
		s.insert(i);
	str.erase();
	for (auto i : s)
		str.push_back(i);


	solve(str, r, 0, "");

///////////////////////end-........................

	return 0;

}