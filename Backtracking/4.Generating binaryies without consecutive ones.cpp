#include<bits/stdc++.h>
using namespace std;

/*Generate binaries no. without consecutive ones*/

void genBinary(int n,int zeros,int ones,string op){
	if( n==0 )
	{
		cout<<op<<endl;
		return ;
	}
    
    if(op.size()==0 || op[op.size()-1] != '1')
    {  string op1 =  op;
    	op1.push_back('1');
       genBinary(n-1,zeros,ones+1,op1);
    }

   string op2 = op;
   op2.push_back('0');
   genBinary(n-1,zeros+1,ones,op2);


return;
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
//////////////////////////////////////start...............
int n;
cin>>n;

string op="";
int zeros=0;
int ones = 0;

genBinary(n,zeros,ones,op);


///////////////////////end-.........................

	return 0;

}


