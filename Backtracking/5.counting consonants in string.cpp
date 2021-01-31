#include<bits/stdc++.h>
using namespace std;

/*Generate binaries no. without consecutive ones*/

void solve(vector<int> v, int r) {
	if (v.size() == 2)
	{	for (int i = 0; i < v.size() - 2; i++)
			cout << v[i];
		cout << endl;
		return;
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
//////////////////////////////////////start...............
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int r;
	cin >> r;

	solve(v, r);



///////////////////////end-.........................

	return 0;

}


