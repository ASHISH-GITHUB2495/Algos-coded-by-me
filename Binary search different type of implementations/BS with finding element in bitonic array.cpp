#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container



int binarySearchPeakElementBitonic (int n, int arr[])
{



	int low = 0 , high = n - 1;

	while (low <= high)
	{

		int mid = low + (high - low) / 2;
		//returning mid ....
		if ((mid > 0 && mid < n - 1) && (arr[mid] >= arr[mid + 1]  && arr[mid] >= arr[mid - 1])) //if mid lies between corners
			return mid;
		else if (mid == 0 && arr[mid] >= arr[mid + 1]) //if mid lies if first index
			return mid;
		else if (mid == n - 1 && arr[mid] >= arr[mid - 1]) //if mid lies in last index
			return mid;


		else if (mid > 0 && arr[mid - 1] > arr[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;

}

int binarySearchAscending(int n, int arr[], int low , int high, int num)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == num)
			return mid;
		else if (arr[mid] > num)
			high = mid - 1;
		else
			low = mid + 1;


	}


	return -1;

}

int binarySearchDescending(int n, int arr[], int low , int high, int num)
{

	while (low <= high)
	{
		int mid = low + (high - low ) / 2;
		if (arr[mid] == num)
			return mid;
		else if (arr[mid] < num)
			high = mid - 1;
		else
			low = mid + 1;

	}


	return -1;






}

int main()
{

//////////////////////////////////////start...............
	//  hERE WE GONNA SEARCH THE ELEMENT IN BITONIC ARRAY
	// Basically we are going to find the peak element and then their both sides are sorted as
	//ascending or decending so their we will apply the binary simple search




	int n, q;
	cin >> n;
	int  arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int r;
	cin >> r;

	int  num = binarySearchPeakElementBitonic (n, arr);

	// we have found the index of peak element ...then here we will going to apply simple binarySearch in
	//sorted array

	int i = binarySearchAscending(n, arr, 0, num, r);
	int j = binarySearchDescending(n, arr, num, n - 1, r);

	cout << "highest at " << num << endl;

	if (i == -1 && j == -1)
		cout << "Element not exists\n";
	else
	{
		if (i > j)
			cout << "Element found at Index " << i << endl;
		else
			cout << "Element found at Index " << j << endl;

	}









	return 0;
////////////////////////////////////////end-.........................



}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
