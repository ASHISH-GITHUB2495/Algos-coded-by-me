#include<bits/stdc++.h>
#include<string>

using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map
#define bbit bitset <64>
#define INT_BITS 16
/*

Every positive fraction can be represented as sum of unique unit fractions.
A fraction is unit fraction if numerator is 1 and denominator is a positive integer,
 for example 1/3 is a unit fraction. Such a representation is called Egyptian Fraction
  as it was used by ancient Egyptians.

Following are few examples:

Egyptian Fraction Representation of 2/3 is 1/2 + 1/6
Egyptian Fraction Representation of 6/14 is 1/3 + 1/11 + 1/231
Egyptian Fraction Representation of 12/13 is 1/2 + 1/3 + 1/12 + 1/156
We can generate Egyptian Fractions using Greedy Algorithm.
 For a given number of the form ‘nr/dr’ where dr > nr, first find the greatest possible
 unit fraction, then recur for the remaining part.
 For example, consider 6/14, we first find ceiling of 14/6, i.e., 3.
  So the first unit fraction becomes 1/3, then recur for (6/14 – 1/3) i.e., 4/42.

*/
/*RULE:---
  1.It is in the form of nr/dr .. then find the ceiling of dr/nr;
  then recur it .

*/

void printEgyptian(int nr , int dr)
{
	if (nr == 0 || dr == 0)
		return;
	if (dr % nr == 0)
	{
		cout << "1/" << dr / nr;
		return;
	}
	if (nr % dr == 0)
	{
		cout << nr / dr;
		return;
	}
	if (nr > dr) {
		cout << nr / dr << "+" ;
		printEgyptian(nr % dr, dr);
		return;
	}


	int n = dr / nr + 1;
	cout << "1/" << n << " + ";


	printEgyptian(nr * n - dr, dr * n);
}
int32_t main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	int nr, dr;
	cout << "Enter your numerator and denominator\n";
	cin >> nr >> dr;

	cout << "Egyptian fraction representation of " << nr << "/" << dr << " is:\n";
	printEgyptian(nr, dr);



///////////////////////end-.........................
#ifndef ONLINE_JUDGE
	cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
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
// to sort string decending (); but with vec.rbegin()  and vec.rend();
// NOT WORKING SOMETIME IN ONLINE JUDGE

// itoa (int, char* str , int base);
//atoi convert string to int;
//atol convert string to long;
//