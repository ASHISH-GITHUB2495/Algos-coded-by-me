#include<iostream>
using namespace std;

int main()
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
		for (int j = 0; j < n; j++)
			res ^= (arr[i] + arr[j]);

	cout << "Pair sum xor of array is " << res << endl;
	
	return 0;
}
