#include<bits/stdc++.h>
using namespace std;

void ndigitbinary(vector<string> &v, int ones, int n, int zeros, string op)
{
	if(n == 0)
	{
		v.push_back(op);
		return;
	}
	if(ones>zeros){
		string op1=op;
		op1.push_back('0');
		ndigitbinary(v,ones,n-1,zeros+1,op1);
	}
   string op2=op;
   op2.push_back('1');
   ndigitbinary(v,ones+1,n-1,zeros,op2);
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
	int ones = 0;
	int zeros = 0;
	vector<string> v;
	string op = "";
	ndigitbinary(v, ones, n, zeros, op);

	for (auto i : v)
		cout << i << endl;

///////////////////////end-.........................

	return 0;

}


