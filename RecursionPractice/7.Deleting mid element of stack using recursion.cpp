#include<bits/stdc++.h>
using namespace std;

/* Deleting mid element of stack ... */


void solve(stack <int> & s, int k) {   
	if (k == 1)
	{	s.pop();
		return;
	}
   int temp = s.top(); s.pop();
   solve(s,k-1);
   s.push(temp);
   return;


}


stack<int>  midDel(stack <int> & s) {   

	if (s.size() == 0)
		return s;
	int k;
	(s.size() % 2 != 0) ? k = (s.size() / 2) + 1 : k = s.size() / 2;
	solve(s, k);
	return s;
}



void printStack(stack <int> s) {       //printing stack with recursion
	if (s.size() == 0)
		return;
	int temp = s.top();
	s.pop();
	cout << temp << endl << "---" << endl;
	printStack(s);

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
	int n, data;
	cin >> n;
	stack <int> s;

	for (int i = 0; i < n; i++)
	{
		cin >> data;
		s.push(data);
	}
	int k;


	s = midDel(s);
	printStack(s);


///////////////////////end-.........................

	return 0;

}


