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
	for (int i = 0; i < n; i++)
		res ^= (arr[i] + arr[i]);

	
	cout << "Pair sum xor of array is " << res << endl;



	return 0;

}

