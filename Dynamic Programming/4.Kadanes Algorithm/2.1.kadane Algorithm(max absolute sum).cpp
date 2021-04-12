#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 1073741824





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
	// pair<string, int> arr[] = { { "geeks", 4 },
	// 	{ "for", -3 },
	// 	{ "geeks", 2 },
	// 	{ "tutorial", 3 },
	// 	{ "program", -4 }
	// };


	pair<string, int> arr[] = { { "practice", -7 },
		{ "makes", 2 },
		{ "men perfect", 5}
	};

	vector<int> v;

	for (auto i : arr)
		v.push_back(i.second);

	int currBest = v[0]; int maxBest =abs( v[0]);
	vector<int >currElem; currElem.push_back(0);
	vector<int> bestElem; bestElem.push_back(0);

	for (int i = 1; i < v.size(); i++) {
		if (currBest + v[i]< v[i]) {
			currBest = v[i];
			currElem.erase(currElem.begin(), currElem.end());
			currElem.push_back(i);
		}
		else {
			currBest += v[i];
			currElem.push_back(i);
		}

		if (maxBest < abs(currBest)) {
			maxBest = abs(currBest);
			bestElem = currElem;
		}

	}

	for (auto i : bestElem) {
		cout <<  arr[i].first << " ";
	}



///////////////////////end-.........................

	return 0;

}


