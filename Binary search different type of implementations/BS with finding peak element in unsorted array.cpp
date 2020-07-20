#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container



int binarySearchPeakElement(int n, int arr[])
{



	int low = 0 , high = n - 1;

	while (low <= high)
	{

		int mid = low + (high - low) / 2;
		//returning mid ....
		if ((mid > 0 && mid < n - 1) && (arr[mid] >= arr[mid + 1]  && arr[mid] >= arr[mid - 1])) //if mid lies between corners
			return arr[mid];
		else if (mid == 0 && arr[mid] >= arr[mid + 1]) //if mid lies if first index
			return arr[mid];
		else if (mid == n - 1 && arr[mid] >= arr[mid - 1]) //if mid lies in last index
			return arr[mid];
	

		else if (mid > 0 && arr[mid - 1] > arr[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;

}


int main()
{

//////////////////////////////////////start...............
	//  we have to find atleast one peak element

	// A Peak element is element which is greater or equal to both its neigbour elements...





	int n, q;
	cin >> n;
	int  arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	int  num = binarySearchPeakElement  (n, arr);

	cout << "A peak element in array is " << num << endl;









	return 0;

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
