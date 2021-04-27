#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//getStairPath-> recursion + tabulation  ... for concept check recursion get stairs

int ladder[100];
int ladders(int n) {

	 //base cases
	   ladder[0]=1;ladder[1]=1; ladder[2]=2;
	
	for(int i=3;i<=n;i++){
        ladder[i]=ladder[i-1]+ladder[i-2]+ladder[i-3];
	}

	return ladder[n];
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
//////////////////////////////////////start........
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)ladder[i] = 0;
	cout << ladders(n) << endl;

///////////////////////end-........................

	return 0;

}