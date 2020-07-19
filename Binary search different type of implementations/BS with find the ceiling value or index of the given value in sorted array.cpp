#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container



int binarySearchRotated (int n, int arr[], int num)
{
	int l = 0 , r = n - 1;

	//all we need is going to search the element in all those probable indices....

	int high = -1;

	while (l <= r)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] >= num)
		{	high = arr[mid];   // you may store your floor indix

			r = mid - 1;

		}
		else if (arr[mid] < num)
			l = mid + 1;


	}

	return high;




}


int main()
{

//////////////////////////////////////start...............
	// we are going to find the ceiling value of the element in the sorted array


	int n, q;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int i;
	cin >> i;

	int num = binarySearchRotated(n, arr, i);

	cout << "the floor of the element is " << num << endl;









////////////////////////////////////////end-......................
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
