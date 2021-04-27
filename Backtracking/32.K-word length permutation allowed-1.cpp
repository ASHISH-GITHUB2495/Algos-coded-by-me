#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*Words k selection -2 : Here you have given string with multiple chars
you have to select k distinct chars ... permutation allowed
example input:  aabbcc
                2
		output: ab
		        ba
		        ac
		        ca
		        bc
		        cb
 approach 1
*/


void solve(string str, int r, unordered_map<char, bool> used, int idx, string ans) {
	if (ans.size() == r)
	{	cout << ans << endl;
		return;
	}



	for (int i=0;i<str.size();i++) {
		if (used[str[i]] == false) {
			used[str[i]] = true;
			solve(str, r, used, idx + 1, ans + str[i]);
			used[str[i]] = false;
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
	int r;
	cin >> r;
	//getting distinct chars
	set <char> s;
	for (auto i : str)
		s.insert(i);
	str.erase();
	for (auto i : s)
		str.push_back(i);

	unordered_map <char, bool> used;
	for (auto i : str)
		used[i] = false;


	solve(str, r, used, 0, "");

///////////////////////end-........................

	return 0;

}