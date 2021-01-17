#include<bits/stdc++.h>
using namespace std;



void solve(string ip,string op) 
{   
   if(ip.length()==0)
   	 {cout<<op<<endl;
   	  return;
   	 }
     
     string op1 = op +"_"+ip[0];
     string op2 = op+ip[0];
     ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
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
  string ip;
  cin>>ip;
  string op;
  op.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip,op);

///////////////////////end-.........................

	return 0;

}


