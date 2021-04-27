#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Josephus proble.. dont know.. google it

int josephus(int n,int k){
    if(n==1)
    	return 0;

	int survivor = josephus(n-1,k); //faith.. it will return the survior from n-1 bandas

	int y = (survivor+k)%n;   //now you please start from the aage
	return y;

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

	int n,k;
	cin >> n >>k;


	cout<<josephus(n,k)<<endl;


///////////////////////end-........................

	return 0;

}