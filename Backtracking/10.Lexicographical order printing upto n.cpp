#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Maximum score of word problem..

/*
input :- 4
		 dog cat dad good
		 9
		 a b c d d d g o o
		 1 0 9 5 0 0 3 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0


Basically, we have to find subsets from given words (dog,cat,dad,good)
(possible 2^n=16 subsets) such that the frequency of each charcter in the
subset not exceeds (a b c d d d g o o) given characters. Now, from these subset
count each subset score by given character scores and return the maximum one.

*/

void lexico(int i,int n){

   if(i>n+1){
   	return;

   }
	//any number comes print themselves first
	cout<<i<<endl;

	for(int j=0;j<=9;j++){
		lexico(10*i + j , n);
	}

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
	cin>>n;
	
	for(int i=1;i<=9 && i <=n;i++){   //first call the front ones 1 to 9 to print their childrens

		lexico(i,n);
	}


///////////////////////end-........................

	return 0;

}