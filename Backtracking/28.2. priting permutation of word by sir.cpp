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

void solve(int tbox,string ans, int idx, unordered_map<char, int> u) {

	 if(idx == tbox){
	 	cout<<ans<<endl;
	 	return;
	 }


	for (auto i : u) {
		if (i.second > 0) {
			ans[idx] = i.first; u[i.first]--;
			solve(tbox,ans,idx+1,u);
			ans[idx]='-';u[i.first]++;

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

	string ans = str;
	for (int i = 0; i < str.size(); i++) ans[i] = '-';

	unordered_map <char, int> u;
	for (auto i : str) u[i]++;



	solve(str.size(),ans, 0, u);



///////////////////////end-........................

	return 0;

}