#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*Words k selection -2 : Here you have given string with multiple chars
you have to select k distinct chars ...no permutation allowed
example input: aaabbccddde
				3

		output: abc
				abd
				abe
			    acd
				ace
				ade
				bcd
				bce
				bde
				cde

 approach 2
*/


void solve(string str, int r, int idx, char ans[], int lb, int chcount) {
	if (chcount == r) {
		for (int i = 0; i < r; i++)cout << ans[i];
		cout << endl;
		return;
	}

	if (idx == str.size())
		return;




	for (int i = lb + 1; i < str.size(); i++) {
		ans[idx] = str[i];
		solve(str, r, idx + 1, ans, i, chcount + 1);
		ans[idx] = '-';


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

	char ans[r];
	for (int i = 0; i < r; i++) ans[i] = '-';


	solve(str, r, 0, ans, -1, 0);

///////////////////////end-........................

	return 0;

}