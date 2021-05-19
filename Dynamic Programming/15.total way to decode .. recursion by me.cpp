#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* Total ways to decode a string
 so here you have given a string of digits... and a set of int and char which are mapped together
 .. you have to find count of ways we can decode it..

 Example input: 123
         ouput: abc
				aw
				lc
				Total ways we can decode is : 3


Here in this approach i have used brute force with recursion ...by me.
*/


void solve(string str, int idx, unordered_map<int, char> u, vector<string> v, int& cnt) {

	if (idx == str.size()) {
		for (auto i : v) {
			cout << u[stoi(i)];
		}
		cout << endl;cnt++;
		return;
	}

	if (str[idx] == '0')
		return;


	v.push_back(str.substr(idx, 1));
	solve(str, idx + 1, u, v,cnt);
	v.pop_back();

	if (idx + 1 < (str.size()) && stoi(str.substr(idx, 2)) > 9 && stoi(str.substr(idx, 2)) < 27 ) {
		v.push_back( str.substr(idx, 2));
		solve(str, idx + 2, u, v,cnt);
		v.pop_back();
	}


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
	string str;
	cin >> str;                   //given
	unordered_map<int, char> u;   //given
	u[1] = 'a';
	u[2] = 'b';
	u[3] = 'c';
	u[4] = 'd';
	u[5] = 'e';
	u[6] = 'f';
	u[7] = 'g';
	u[8] = 'h';
	u[9] = 'i';
	u[10] = 'j';
	u[11] = 'k';
	u[12] = 'l';
	u[13] = 'm';
	u[14] = 'n';
	u[15] = 'o';
	u[16] = 'p';
	u[17] = 'q';
	u[18] = 'r';
	u[19] = 's';
	u[20] = 't';
	u[21] = 'u';
	u[22] = 'v';
	u[23] = 'w';
	u[24] = 'x';
	u[25] = 'y';
	u[26] = 'z';
	vector<string> v;
	int cnt = 0;
	solve(str, 0, u, v, cnt);
	cout<<"Total ways we can decode is : "<<cnt<<endl;

///////////////////////end-.........................

	return 0;

}


