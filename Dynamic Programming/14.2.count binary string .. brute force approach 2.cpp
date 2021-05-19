#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* count binary string
 Here you have to count the number of binary string of lenght n..
 where their is no consecutive zeros..


 so.. the BRUTEFORCE approach we will generate all binary string that is 2^n and
 check it is valid or not and count.


aprroach 2... not checking validity ..but only appending zero which dont have previous zero
but strill calls are same.. dont now how.
when n=5
 Total call is 63  in BruteForce
*/



void solve(int n, int idx, string ans, int &cnt) {

	if (ans.size() == n) {
		cout << ans << endl, cnt++;
		return;
	}

	if (idx == 0 || (idx != 0 && ans[idx - 1] != 0))
		solve(n, idx + 1, ans + to_string(0), cnt);
	solve(n, idx + 1, ans + to_string(1), cnt);



}



int main()
{

#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	//memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;

	int cnt = 0;
	solve(n, 0, "", cnt);

	cout << "Total possible binary string without consecutive zeros is : " << cnt << endl;




///////////////////////end-.........................

	return 0;

}


