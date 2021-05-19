#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*Here are actually taking input of graph and storing into adjacencey list 
and traversing it...
input:
7 8
0 3 40
0 1 10
1 0 10
1 2 10
2 3 10
2 1 10
3 0 40
3 2 10
3 4 2
4 3 2
4 5 3
4 6 8
5 4 3
5 6 3
6 4 8
6 5 3

try to understand and visualise the code... we are using this datastructure in further graph
questions.


*/


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
	int n, e;
	cin >> n >> e;
//  we declare adjacency list
	vector<pair<int, int>> v[n];


//we are taking input
	int s, d, w;
	for (int i = 0; i < e * 2; i++) {
		cin >> s >> d >> w;
		v[s].push_back({d, w});
	}



//now we traverse.....
	for (int i = 0; i < n; i++)  {
		for (int j = 0; j < v[i].size(); j++) {
			cout << i << " " << v[i][j].first << " " << v[i][j].second << endl;
		}
	}

///////////////////////end-.........................

	return 0;

}


