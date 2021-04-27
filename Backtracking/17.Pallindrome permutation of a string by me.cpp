#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007



void solve(string str, int idx, char ans[],set <string> &s) {
	// int k=idx;
	// cout<<str[idx]<<endl;

	if (idx == str.size()) {
		bool flag = 1;
		//checking pallindrome
		for (int i = 0; i < str.size(); i++) {
			if (ans[i] != ans[str.size() - 1 - i]) {
				flag = 0;
				break;
			}

		}string ss;
		if (flag == 1) {
			for (int i = 0; i < str.size(); i++)ss.push_back(ans[i]);
		  s.insert(ss);

		}

		return ;


	}


 // for(int i=0;i<str.size();i++)cout<<ans[i];
 // 	cout<<endl;

	for (int i = 0; i < str.size(); i++) {
		if (ans[i] == '-') {
			// cout << "yes" << endl;
			ans[i] = str[idx];
			// cout << ans[i] << endl;
			solve(str, idx + 1, ans,s);
			ans[i] = '-';
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
	char ans[str.size()];
	for (int i = 0; i < str.size(); i++) ans[i] = '-';
    set <string> s;
	solve(str, 0, ans,s);
	for(auto i:s)
		cout<<i<<endl;
///////////////////////end-........................

	return 0;

}