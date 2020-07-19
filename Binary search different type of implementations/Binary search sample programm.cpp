#include<bits/stdc++.h>
using namespace std;


int binarySearch(int n,int arr[],int num)
{
  int l=0 , r=n-1;

   while(l<=r)
   {
     int mid=l+(r-l)/2;

	if(arr[mid]== num)
	  return mid;
	else if (arr[mid]>num)
	  r=mid-1;
	else 
	  l=mid+1;
   }

  return -1;


}



int main()
{
 int n,q;
 cin>>n;
 int arr[n];

 for(int i=0;i<n;i++)
  cin>>arr[i];


  cin>>q;

  while(q--)
  {
	  int i;
	  cin>>i;

	  i=binarySearch(n,arr,i);

     cout<<i+1<<endl;
   
    


  }




return 0;

}

