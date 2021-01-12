#include<bits/stdc++.h>
using namespace std;





void insertTemp(vector <int> & vec, int elem) { // recursively inserting leftovers
	if (vec.size() == 0 || vec[vec.size() - 1] <= elem)
	{
		vec.push_back(elem);
		return;
	}
	int temp = vec[vec.size() - 1];
	vec.pop_back();
	insertTemp(vec, elem);
	vec.push_back(temp);
	return;
}


void sortVec(vector <int> & vec) {          // recursively sorting
	if (vec.size() == 1)
		return;
	int temp = vec[vec.size() - 1];
	vec.pop_back();

	sortVec(vec);
	insertTemp(vec, temp);
}

void printVec(vector <int> & vec) {         //recursively printing vector

	if (vec.size() == 0)
		return;
	int temp = vec[vec.size() - 1];
	vec.pop_back();
	printVec(vec);
	cout << temp << " ";
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
	vector <int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sortVec(vec);

	printVec(vec);

///////////////////////end-.........................

	return 0;

}


