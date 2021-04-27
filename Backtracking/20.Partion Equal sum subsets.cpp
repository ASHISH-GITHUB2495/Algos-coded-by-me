#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
partion the array to equal sum subsets
try example--->  6 3
1 6 2 5 3 4

*/
void solve(int arr[], int idx, vector<vector<int>> v, int n) {
	// for (int i = 0; i < v.size(); i++) {
	// 	for (int j = 0; j < v[i].size(); j++)
	// 		cout << v[i][j];
	// 	cout << " ";
	// }
	// cout<<endl;

	if (n == idx) {

		int sum = 0;
		for (int i = 0; i < v[0].size(); i++)
			sum += v[0][i];

		int flag = 1;
		for (int i = 1; i < v.size(); i++) {
			int nsum = 0;
			for (int j = 0; j < v[i].size(); j++)
				nsum += v[i][j];
			if (nsum != sum) {
				flag = 0;
				break;
			}

		}
		if (flag == 1) {
			for (int i = 0; i < v.size(); i++) {cout<<"[";
				for (int j = 0; j < v[i].size(); j++)
					cout << v[i][j];
				cout << "] ";
			}cout << endl;
		}
		
		return;

	}



	for (int i = 0; i < v.size(); i++) {

		v[i].push_back(arr[idx]);
		solve(arr, idx + 1, v, n);
		v[i].pop_back();

		if (v[i].size() == 0)
			break;
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
//////////////////////////////////////start........
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	if (n < k)cout << "Not Possible" << endl;
	else if (k == 1) {
		cout << "[";
		for (int i = 0; i < n; i++)cout << arr[i];
		cout << "]";
	}
	else {
		vector<vector<int>> v(k);
		solve(arr, 0, v, n);



	}



///////////////////////end-........................

	return 0;

}