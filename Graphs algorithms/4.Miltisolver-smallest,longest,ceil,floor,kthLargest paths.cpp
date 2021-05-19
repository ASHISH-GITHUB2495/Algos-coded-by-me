#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
Here you have given 2 integers first .... nodes and edges respectively.
and then undirected edges with weight given to you.
then src and dest given to you and then num and k;

you have to output .. smallest path ie, minimum cost to go from src to dest
           similarly, longest path
                      ceil path from num
                      floor path from num
                      kth largest path...

example input:
7 8
0 1 10
1 2 10
2 3 10
0 3 40
3 4 2
4 5 3
5 6 3
4 6 8
0 6
40 3

Smallest path: 0- 1- 2- 3- 4- 5- 6-||38
Largest path: 0- 3- 4- 6-||50
Floor path for 40: 0- 3- 4- 5- 6-||48
Floor path for 40: 0- 1- 2- 3- 4- 5- 6-||38
Kth largest path : 0- 1- 2- 3- 4- 6-||40



befor watching the video think of it... from previous question ...
we will take the same funtion but with all dist and set of ans in it .. thats it ..
now just print it on your own way...


Happy coinding




Hint: set with pair of dist/cost and anwerse... in c++stl set all are in asending order..mind it.

*/





//here we are also neighbour of our neighbour so we use visited array..
void totalPaths(vector<pair<int, int>> v[], int vis[], int src, int des, string ans, int dist, set <pair<int, string>> & paths) {

	vis[src] = 1;

	if (src == des) {
		ans.pop_back();
		paths.insert({dist, ans});
		return;
	}


	for (auto i : v[src]) {
		if (vis[i.first] == 0) {
			dist += i.second;
			totalPaths(v, vis, i.first, des, ans + to_string(i.first) + "- ", dist, paths);
			dist -= i.second;
			vis[i.first] = 0;
		}

	}

	return;



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
	int n, e;
	cin >> n >> e;
//  we declare adjacency list
	vector<pair<int, int>> v[n];


//we are taking input
	int s, d, w;
	for (int i = 0; i < e; i++) {
		cin >> s >> d >> w;
		v[s].push_back({d, w});
		v[d].push_back({s, w});
	}

	int src, des;
	cin >> src >> des;
	int num, k;
	cin >> num >> k;

	int vis[n];
	for (int i = 0; i < n; i++)
		vis[i] = 0;


	set <pair<int, string>> paths;
	totalPaths(v, vis, src, des, "0- ", 0, paths);


	//Here we got the paths with dist and string of paths...Now print it..

	int dist = INT_MAX; string ans;  
	for (auto i : paths) {
		if (dist > i.first)
			dist = i.first, ans = i.second;

	}
	cout << "Smallest path: " << ans << "||" << dist << endl;

	dist = INT_MIN; 
	for (auto i : paths) {
		if (dist < i.first)
			dist = i.first, ans = i.second;

	}
	cout << "Largest path: " << ans << "||" << dist << endl;

	int diff = INT_MAX;

	for (auto i : paths) {

		if (diff > (i.first - num) && (i.first - num) > 0)
			diff = (i.first - num), dist = i.first, ans = i.second;

	}
	cout << "Floor path for " << num << ": " << ans << "||" << dist << endl;
	diff = INT_MAX;
	for (auto i : paths) {

		if (diff > (num - i.first) && (num - i.first) > 0)
			diff = (num - i.first), dist = i.first, ans = i.second;

	}
	cout << "Floor path for " << num << ": " << ans  << "||" << dist << endl;


	k = paths.size() - k + 1;
	int c = 0;
	for (auto i : paths) {
		c++;
		if (c == k)
			cout << "Kth largest path : " << i.second   << "||" << i.first << endl;

	}




///////////////////////end-.........................

	return 0;

}


