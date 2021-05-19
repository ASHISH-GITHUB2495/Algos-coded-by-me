#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* count binary string
 Here you have to count the number of binary string of lenght n..
 where their is no consecutive zeros..


 so.. the BRUTEFORCE approach we will generate all binary string that is 2^n and
 check it is valid or not and count.


Apprach 3 pepcoding;
*/



int solve(int n) {
	if(n==0||n==1)
		return n;

	int pre1 = 1, pre0 = 1;
	int curr1,curr0;

	for(int i=2;i<=n;i++){
        curr0=pre1;
        curr1=pre0+pre1;
        
        pre1=curr1;
        pre0=curr0;

	}




	return curr0+curr1;
}



int main()
{

#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start............
	//memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;

	cout << "Total possible binary string without consecutive zeros is : " << 	solve(n) << endl;




///////////////////////end-.........................

	return 0;

}


