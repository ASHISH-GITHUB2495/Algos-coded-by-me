#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

//#define int long long
#define mod 100005007


/* Arrange building....
you have given input n.. you have n*n plot in each side of road.
you have to make building and spaces but no two building are adjacent..
they can be opposite to the road...


Approach : you can solve it by previous binary string approach .. for one side and the answer
is square of that...
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

	cout << "Total possible ways to make such buldings is : " << pow(solve(n),2) << endl;




///////////////////////end-.........................

	return 0;

}


