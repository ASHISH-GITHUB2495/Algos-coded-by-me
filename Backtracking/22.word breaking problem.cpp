#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
word breaking problem... you have given n words and a string ... you have to
break the string ... using the n words..
input : 6
        micro soft hi ring hiring microsoft
        microsofthiring

output: micro soft hi ring
        microsoft hi ring
        microsoft hiring
        micro soft hiring


*/
void solve(string words[], string str, int n, string ans, int idx) {
	if (idx==str.size()) {
		cout << ans << endl;
		return;
	}

	for (int i = 0; i < str.size() - idx; i++) {
		string prefix = str.substr(idx, i + 1);

		bool f = 0;
		for (int j = 0; j < n; j++) {
			if (prefix == words[j]) {
				f = 1; break;
			}
		}
		if (f == 1) {
          
			solve(words, str, n, ans + prefix + " ", idx + i + 1);

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
	int n;
	cin >> n;
	string words[n];
	for (int i = 0; i < n; i++)
		cin >> words[i];
	string str;
	cin >> str;


	solve(words, str, n, "", 0);




///////////////////////end-........................

	return 0;

}