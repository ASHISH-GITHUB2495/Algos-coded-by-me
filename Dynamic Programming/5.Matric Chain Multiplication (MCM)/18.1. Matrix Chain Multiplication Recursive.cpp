#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define int long long
#define mod 1073741824

//Recursive approach of Matrix Chain Multiplication.....


int mcc(int arr[],int i,int j){

 if(i>=j)
 	return 0;

 int minn=INT_MAX;

 for(int k=i;k<j;k++){
  
    int temp = mcc(arr,i,k) + mcc(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
     minn = min(minn,temp);
 }



	return minn;
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

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout<<"minimum cost of multiplication of matrices : "<<mcc(arr,1,n-1)<<endl;



///////////////////////end-.........................

	return 0;

}


