#include<bits/stdc++.h>
using namespace std;

int main()
{   int q;
	cout<<"Enter no. of queries : ";
	cin>>q;
	while(q--)
	{   int n,i;
		cout<<"Enter number 'n' to count the number of bits\n";;
		cin>>n;
		int count=0;
	
	   while(n>0)
	   {
	   	 count++;
	   	 n=n&(n-1);
	   }
		cout<<"The number of set bits in  is "<<count<<endl;
		cout<<"-------------------------\n\n";
		
		
	}
	
	
	
	
	return 0;
}
