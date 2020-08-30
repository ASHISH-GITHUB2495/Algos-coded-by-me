#include<bits/stdc++.h>
using namespace std;

int main()
{   int q;
	cout<<"Enter no. of queries : ";
	cin>>q;
	while(q--)
	{   int n,i;
		cout<<"Enter number 'n' and 'i'th  no. to check its bit\n";
		cin>>n>>i;
		int f=1;
		f=f<<i;
	    
		if( n & f)	
		    cout<<"the "<<i<<"th bit is set in "<<n<<endl;
		else
		    cout<<"the "<<i<<"th bit is not set in "<<n<<endl;
		
		
		cout<<"-------------------------\n\n";
		
		
	}
	
	
	
	
	return 0;
}
