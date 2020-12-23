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
Job Sequencing Problem
----------------------
Given an array of jobs where every job has a deadline and associated profit if the job is
finished before the deadline. It is also given that every job takes the single unit of time,
so the minimum possible deadline for any job is 1. How to maximize total profit if only one
job can be scheduled at a time.

Examples:

Input: Four Jobs with following
deadlines and profits
JobID  Deadline  Profit
  a      4        20
  b      1        10
  c      1        40
  d      1        30
Output: Following is maximum
profit sequence of jobs
        c, a


Input:  Five Jobs with following
deadlines and profits
JobID   Deadline  Profit
  a       2        100
  b       1        19
  c       2        27
  d       1        25
  e       3        15
Output: Following is maximum
profit sequence of jobs
        c, a, e
*/
/*RULE:---
  1.It is in the form of nr/dr .. then find the ceiling of dr/nr;
  then recur it .
*/

struct Job
{	char id;
	int deadline;
	int profit;

};

bool compare(Job a , Job b) {
	return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n) {
	int jobSlot[n];
	fill(jobSlot, jobSlot + n, 0);
	sort(arr, arr + n, compare);
	int result[n];

	for (int i = 0; i < n; i++) {

		for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
		{
			if (jobSlot[j] == 0) {
				result[j] = i;
				jobSlot[j] = 1;
				break;
			}
		}
	}


	for (int i = 0; i < n; i++)
		if (jobSlot[i])
			cout << arr[result[i]].id << " ";



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
	cout << "Enter no. of Jobs \n";
	cin >> n;

	Job arr[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter job id, deadline, profit of job no. " << i + 1 << endl;
		cin >> arr[i].id >> arr[i].deadline >> arr[i].profit;

	}

	printJobScheduling(arr, n);


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