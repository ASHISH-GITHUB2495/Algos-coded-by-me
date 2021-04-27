#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007
/*
Here you have given n the number of ladders and arr[1,2,3] jumps allowed,you have to give the combinations of ladders to get from
1 to n
such that if n==4 and [1,2,3] then the ways are
1 1 1 1
1 1 2
2 1 1
1 2 1
1 3
3 1


total  6 ways..

*/

//only jumps 1,2,3 are allowed to go form n to 1;

vector<string> getPaths(int n) {

	if (n == 0) {
		vector<string> s;
		s.push_back("");
		return s;
	}
	else if (n < 0) {
		vector<string> s;
		return s;
	}

	vector <string> paths1 = getPaths(n - 1);
	vector <string> paths2 = getPaths(n - 2);
	vector <string> paths3 = getPaths(n - 3);

	vector<string> ans;

	for (auto i : paths1)
		ans.push_back(i + " 1");
	for (auto i : paths2)
		ans.push_back(i + " 2");
	for (auto i : paths3)
		ans.push_back(i + " 3");

	return ans;

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

//only jumps 1,2,3 are allowed to go form n to 1;

	vector<string> v = getPaths(4);
	for (auto i : v)
		cout << i << endl;


///////////////////////end-........................

	return 0;

}