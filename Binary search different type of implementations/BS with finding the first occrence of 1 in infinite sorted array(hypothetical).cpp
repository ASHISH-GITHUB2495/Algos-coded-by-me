#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container



int binarySearchInfiniteFirstOccurence (int n, int arr[], int num)
{

	// first of all we are going to find the end or high point ,ie,
	// where we gonna apply our range with binary search

	int start = 0 , end = 1;

	while (arr[end] < num)
		start = end , end = end * 2; // here we are finding the end point....







	int index = -1;          // we are applying the algorithm for finding first occurence;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (arr[mid] == num)
		{
			index = mid;
			end = mid - 1;

		}
		else if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;

	}

	return index;


}


int main()
{

//////////////////////////////////////start...............
	//  we have to find the first occurence of 1 in infinite array .. ie
	// again this is hypothetical
	// but we will going to have this combining to approaches
	// first find range where the 1s are lying than we will apply the approach to find the first occurence;



	int n, q;
	cin >> n;
	int  arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int   i;
	i = 1;

	int  num = binarySearchInfiniteFirstOccurence   (n, arr, i);

	cout << "the fist index of the element  1 is " << num << endl;









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
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better�*/
