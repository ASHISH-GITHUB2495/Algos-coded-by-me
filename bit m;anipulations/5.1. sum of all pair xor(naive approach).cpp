#include<bits/stdc++.h>
using namespace std;



int32_t main()
{

	int n;
	cout << "Enter size of the array :";
	cin >> n;
	cout << "Enter elements:\n";
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int res = 0;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			res += (arr[i] ^ arr[j]);
	}


	cout << "sum of all pair xor of array is " << res << endl;



	return 0;

}

