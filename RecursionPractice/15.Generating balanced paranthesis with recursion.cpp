#include<bits/stdc++.h>
using namespace std;

void balancedParanthesis(vector<string> &v,int open,int close,string op){
	if(open == 0 && close == 0)
	{
		v.push_back(op);
		return;
	}
  if(open>0)
  { 
    string op1=op+"(";
     balancedParanthesis(v,open-1,close,op1);
  }

 if(close>open)
 {
 	
 	string op2=op+")";
 	balancedParanthesis(v,open,close-1,op2);
 }

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
	cin >> n;
	int open = n;
	int close = n;
	vector<string> v;
	string op="";
	balancedParanthesis(v, open, close,op);

	for(auto i: v)
		cout<<i<<endl;

///////////////////////end-.........................

	return 0;

}


