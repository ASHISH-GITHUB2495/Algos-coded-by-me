#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
word pattern matching .. you have given the string and pattern and
you have to map them such that after summing their value is equal to string
try example--->
input: geeksforgeeks
       pep
output:p -> geeks
       e -> for
       p -> geeks
input 2: mazaddifazaddi
       abcb

*/
void solve(string str, string pat, unordered_map <char, string> map, string os) {

	if (pat.size() == 0) {
		if (str.size() == 0) {

			for (int i = 0; i < os.size(); i++) {
				cout<<os[i] << "->" << map[os[i]] << endl;
			}cout<<endl;
       

		}


		return;
	}



	char ch = pat[0];
	string rop = pat.substr(1, pat.size());
	if (map.find(ch) != map.end()) {
		string pmap = map[ch];
		if (str.size() >= pmap.size()) {
			string pre = str.substr(0, pmap.size());
			string ros = str.substr(pmap.size(), str.size());
			if (pre == pmap) {
				solve(ros, rop, map, os);
			}
		}


	} else {

		for (int i = 0; i < str.size(); i++) {
			string pre = str.substr(0, i + 1);
			string ros = str.substr(i + 1, str.size());
			map[ch]= pre;
			solve(ros, rop, map, os);
			map.erase(ch);

		}

	}



	return;

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
	string pat;
	cin >> pat;
	
	unordered_map <char, string> map;

	solve(str, pat, map, pat);


///////////////////////end-........................

	return 0;

}