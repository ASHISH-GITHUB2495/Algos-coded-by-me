#include<bits/stdc++.h>
using namespace std;



int factorial (int n){
	if(n == 1)
		return 1;
	else 
	    return n*factorial(n-1);
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
	cin>>n;
	cout<<factorial(n)<<endl;
///////////////////////end-.........................

	return 0;

}


