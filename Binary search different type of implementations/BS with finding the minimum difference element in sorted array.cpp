#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container



int binarySearchMinimumDifference(int n, int arr[], int num)
{

	//Actually we are running simple binary loop ...which wiill give the
	// actual key element or floor or ceiling based on absolute value
	//actually the if key not found then the start and end pointing to the absolutes

	int start = 0 , end = n - 1;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (arr[mid] == num)
			return num; // return value or indices which you want
		else if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;

	}

	if (abs(arr[start] - num) <= abs(arr[end] - num))
		return arr[start];
	else
		return arr[end];
}


int main()
{

//////////////////////////////////////start...............
	//  here we gonna find the minimum difference element in array i.e, a key is given and after
	// subtracting from each which of them absolute value minimum..





	int n, q;
	cin >> n;
	int  arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int   i;

	cin >> i;

	int  num = binarySearchMinimumDifference   (n, arr, i);

	cout << "The absolute minimum diffrence is " << num << endl;









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
