#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* count binary string
 Here you have to count the number of binary string of lenght n..
 where their is no consecutive zeros..


 so.. the BRUTEFORCE approach we will generate all binary string that is 2^n and
 check it is valid or not and count.

when n=5
 Total call is 63  in BruteForce
*/


bool checkValid(string str) {

	for (int i = 1; i < str.size(); i++) {
		if (str[i] == '0' && str[i - 1] == '0')
			return false;
	}


	return true;


}



void solve(int n, int idx, string ans, int &cnt) {
	cout<<"hii"<<endl;
	if (ans.size() == n) {
		if (checkValid(ans))
			 cnt++;
		return;
	}


	solve(n, idx + 1, ans + to_string(0),cnt);
	solve(n, idx + 1, ans + to_string(1),cnt);



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

	cout <<"Total possible binary string without consecutive zeros is : "<<cnt<<endl;




///////////////////////end-.........................

	     return 0;

}


