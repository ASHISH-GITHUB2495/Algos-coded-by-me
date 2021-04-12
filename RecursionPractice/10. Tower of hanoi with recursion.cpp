#include<bits/stdc++.h>
using namespace std;



void towerOfHanoi(int n,char s,char h,char d,int &count) 
{   count++;
  if(n==1)
  	{
  	 cout<<"moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
     return;
     }
  towerOfHanoi(n-1,s,d,h,count);
    cout<<"moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
  towerOfHanoi(n-1,h,s,d,count);
 return;
}



int main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	int n;
	cout<<"Enter no. of disks"<<endl;
	cin>>n;
     
     cout<<" |  |  |"<<endl;
     cout<<" |  |  |"<<endl;
     cout<<" |  |  |"<<endl;
     cout<<" |  |  |"<<endl;
     cout<<" |  |  |"<<endl;
     cout<<" -  -  -"<<endl;
     cout<<" S  H  D"<<endl;






	int count = 0;
	towerOfHanoi(n,'s','h','d',count);
	cout<<"\n\n---> Number of steps required is "<<count<<endl;


///////////////////////end-.........................

	return 0;

}


