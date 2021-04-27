#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* printing permutation of word 1 ...
 suppose -->input:  aabb

           output:  aabb
					abab
					abba
					baab
					baba
					bbaa

   instead of four factorial .. because of duplicates
   Approach 2 by sir.. taking hashmap
*/


void solve(string str, int swaps, int &maxx, int idx) {
	if (idx == str.size())
		return;
	cout << stoi(str) << endl;;
	if (swaps > 0) {
		for (int i = idx + 1; i < str.size(); i++) {
			swap(str[idx], str[i]);
			int num = stoi(str);
			maxx = max(maxx, num);
			solve(str, swaps - 1, maxx, idx + 1);
			swap(str[idx], str[i]);
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
	int swaps ;
	cin >> swaps;
	int maxx = INT_MIN;
	solve(str, swaps, maxx, 0);
	cout<<maxx<<endl;


///////////////////////end-........................

	return 0;

}