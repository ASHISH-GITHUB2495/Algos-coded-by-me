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
Let us consider the Activity Selection problem as our first example of Greedy algorithms.
 Following is the problem statement.
 You are given n activities with their start and finish times.
 Select the maximum number of activities that can be performed by a single person, assuming that a person
 can only work on a single activity at a time.
 Example:

 Example 1 : Consider the following 3 activities sorted by
by finish time.
     start[]  =  {10, 12, 20};
     finish[] =  {20, 25, 30};
A person can perform at most two activities. The
maximum set of activities that can be executed
is {0, 2} [ These are indexes in start[] and
finish[] ]

Example 2 : Consider the following 6 activities
sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The
maximum set of activities that can be executed
is {0, 1, 3, 4} [ These are indexes in start[] and
finish[] ]
*/

/*
Rule to follow in this algo
   1.sort the pair according to the finish time.
   2.print the first .
   3.from next onwards , pring the pair whose start time in greater or equal
   to the finish time to recent printed pair.

   THAT's It!!!!
*/

bool sortBySec( const pair<int, int> &a, const pair<int, int> &b)
{
	return (a.second < b.second);
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
	int n;




	cout << "Enter number of activities\n";
	cin >> n;
	std::vector < pair <int, int> >time(n);
	cout << "Enter start and end times";
	for (int i = 0; i < n; i++)
	{
		cin >> time[i].first; cin >> time[i].second;
	}



	cout << "Your jobs are\n";

	for (int i = 0; i < n; i++) {
		cout << time[i].first << " ";
	} E;
	for (int i = 0; i < n; i++) {
		cout << time[i].second << " ";
	} E;


	sort(time.begin(), time.end() , sortBySec);


	vector<pair<int, int>> res;
	res.push_back(time[0]);
	for (int i = 1; i < n; i++) {
		if (res[res.size() - 1].second <= time[i].first)
			res.push_back(time[i]);
	}


	cout << "The jobs to be done are: \n";
	for (int i = 0; i < res.size() ; i++)
	{
		cout << res[i].first << " " << res[i].second << endl;
	}










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