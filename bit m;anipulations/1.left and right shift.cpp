#include<iostream>
using namespace std;

int main()
{
	int q;
	cout<<"Enter no. of queries \n";
cin>>q;
while (q--)
{ 
   cout<<"Enter n and i times of left/right shift \n";
	int n,i;
	cin>>n>>i;

	cout <<"left shift : \n"<<n<<" << "<<i<<" = "<<(n<<i)<<" = "<<n<<" * "<<"2^"<<i<<endl;
	cout<<"right shift : \n"<<n<<" >> "<<i<<" = "<<(n>>i)<<" = "<<n<<" / "<<"2^"<<i<<endl<<endl;;
}
    
	
	
	
	return 0;
}
