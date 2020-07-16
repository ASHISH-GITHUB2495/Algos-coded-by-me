#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container


int main()
{


//////////////////////////////////////start...............
	int r, c, q;
	cin >> r >> c;

	int mat[r][c];

	rep(i, 0, r)
	rep(j, 0, c)
	cin >> mat[i][j];


	cout << "Actual Matrix---->" << endl;

	rep(i, 0, r)
	{	rep(j, 0, c)
		cout << mat[i][j] << " ";
		E;
	}

	int prefixMat[r][c];
	prefixMat[0][0] = mat[0][0];

	rep(i, 1, c)
	prefixMat[0][i] = mat[0][i] + prefixMat[0][i - 1]; // summing first row and first column as prefix 1d array

	rep(i, 1, r)
	prefixMat[i][0] = mat[i][0] + prefixMat[i - 1][0];


	rep(i, 1, c)
	rep(j, 1, c)
	prefixMat[i][j] = ((prefixMat[i][j - 1] + prefixMat[i - 1][j] ) - prefixMat[i - 1][j - 1] ) + mat[i ][j ];

	cout << "\n Prefix sum matrix" << endl;

	rep(i, 0, r)
	{
		rep(j, 0, c)
		cout << prefixMat[i][j] << " ";
		E;
	}
	cin >> q;
	cout << "\n\n\nProcessing queries\n";

	while (q--)
	{
		int i1, j1, i2, j2;
		cin >> i1 >> j1 >> i2 >> j2;




		cout << "\n from " << i1 << "," << j1 << " to " << i2 << "," << j2 << " is ";


		int sum = prefixMat[i2][j2] - prefixMat[i1 - 1][j2] - prefixMat[i2][j1 - 1] + prefixMat[i1 - 1][j1 - 1];
		if (i1 == 0 && j1 == 0)
			cout << prefixMat[i2][j2] << endl;
		else
			cout << sum << endl;









	}













////////////////////////////////////////end-.........................

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
