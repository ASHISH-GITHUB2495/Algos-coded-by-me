#include<bits/stdc++.h>
using namespace std;


void reverse(int n,int &g){
 if( n==0)
 	return;
 int temp = n%10;
 n=n/10; g=(g*10)+temp;
 reverse(n,g);

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

int g=0;
reverse(n,g);

if(n==g)
	cout<<"yes"<<endl;
else
	cout<<"no"<<endl;



 

///////////////////////end-.........................

	return 0;

}


