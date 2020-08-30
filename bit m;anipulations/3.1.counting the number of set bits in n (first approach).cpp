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
		int nn=n;
		int count=0;
		while(nn)
		{
			if(nn&1)
			  count++;
			nn=nn>>1;
			   
		}
		cout<<"The number of set bits in "<<n<<" is "<<count<<endl;
		cout<<"-------------------------\n\n";
		
		
	}
	
	
	
	
	return 0;
}
