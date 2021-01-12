#include<bits/stdc++.h>
using namespace std;

/* We have to print n to 1 with recursion ... */

void print(int n){
  if(n==1)
  	{
  		cout<<"1";
        return;
     }
     cout<<n<<" ";
  print(n-1);
  
}

int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//////////////////////////////////////start...............
int n;
cin>>n;
print(n);
cout<<"\nvisit for more--- bye \n";
///////////////////////end-.........................

	return 0;

}


