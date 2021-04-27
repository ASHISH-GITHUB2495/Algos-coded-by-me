#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* subset sum difference .. tug of war
you have given an array ... you have to devide it in equal size .. for odd one may be +1
..such that .. the difference of the sums of both array will be minimum..
Here every element has a choice to go to one or another subset.

input: 6
       1 4 2 3 5 6 
output: [1 4 5 ][2 3 6 ]



*/


int gap = INT_MAX;
vector<int> a1;
vector<int> a2;

void solve(int arr[], vector<int>v1, vector<int>v2, int idx, int arrsize, int s1, int s2) {

	if (idx == arrsize) {

		if (gap > abs(s1 - s2)) {
			gap = abs(s1 - s2);
			a1 = v1, a2 = v2;
		}


		return ;
	}


	if (v1.size()  < (arrsize + 1) / 2) {
		v1.push_back(arr[idx]);
		solve(arr, v1, v2, idx + 1, arrsize, s1 + arr[idx], s2);
		v1.pop_back();
	}

	if (v2.size()  < (arrsize + 1) / 2) {
		v2.push_back(arr[idx]);
		solve(arr, v1, v2, idx + 1, arrsize, s1, s2 + arr[idx]);
		v2.pop_back();
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
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<int> v1;
	vector<int> v2;

	solve(arr, v1, v2, 0, n, 0, 0);
	cout << "[";
	for (auto i : a1)
		cout << i << " ";
	cout << "]";
	cout << "[";
	for (auto i : a2)
		cout << i << " ";
	cout << "]";



///////////////////////end-........................

	return 0;

}