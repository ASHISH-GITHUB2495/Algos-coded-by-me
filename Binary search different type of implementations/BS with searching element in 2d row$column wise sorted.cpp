#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container


int arr[2000][2000];

void binarySearchMatrix(int n, int m, int num)
{
	int i = 0, j = m - 1; // starting with the right upper corner

	while (i != n && j >= 0)
	{
		if (arr[i][j] == num)
		{
			cout << "Element found at " << i + 1 << "th row and " << j + 1 << "th column" << endl;
			return ;
		}
		else if (arr[i][j] > num)
			j = j - 1;
		else
			i = i + 1;

	}


	cout << "Not Exists\n";
	return ;





}


int main()

//////////////////////////////////////start...............
	//  here we going to search the element in 2d row and column wise sorted .....
{


	int n, m;

	cin >> n >> m; //taking input of size of matrix;


	// insertion of matrix;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];


	int r;          // key element to search
	cin >> r;
	binarySearchMatrix (n, m, r);







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
