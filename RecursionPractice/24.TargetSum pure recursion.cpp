#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

void targetSum(int arr[], int n, int target,int sum, string ans) {
     
      if(sum==target)
      {
      	cout<<ans<<endl;
      	return;
      }
      if(n==-1)
      	return;


     targetSum(arr,n-1,target,sum+arr[n],ans+" "+to_string(arr[n]));
     targetSum(arr,n-1,target,sum,ans);
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

	int n = 5;
	int arr[] = {10, 20, 30, 40, 50};
	int target = 60;
    int sum=0;
	targetSum(arr, n-1, target,sum, "");

///////////////////////end-........................

	return 0;

}