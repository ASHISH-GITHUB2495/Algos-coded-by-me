#include<bits/stdc++.h>
using namespace std;

void printPermutation(string str, int left , int right) {

	if (left == right)
	{	cout << str << endl;
		return;
	}
	for (int i = left; i <= right; i++) {

		swap(str[left], str[i]);
		printPermutation(str, left + 1, right);
		swap(str[left], str[i]);

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
//////////////////////////////////////start............
	string str;
	cin >> str;

	printPermutation(str, 0, str.size() - 1);

///////////////////////end-.........................

	return 0;

}


