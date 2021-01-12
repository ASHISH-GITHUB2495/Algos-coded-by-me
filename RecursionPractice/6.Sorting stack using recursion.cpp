#include<bits/stdc++.h>
using namespace std;


void insertStack(stack <int> & s, int elem) {   //inserting leftover by recursion
	if (s.size() == 0 || s.top() <= elem)
	{
		s.push(elem);
		return;
	}
	int temp = s.top();
	s.pop();
	insertStack(s, elem);
	s.push(temp);
	return;
}



void sortStack(stack <int> & s) {   //sorting stack using recursion

	if (s.size() == 1)
		return;
	int temp = s.top();
	s.pop();

	sortStack(s);
	insertStack(s, temp);
}


void printStack(stack <int> & s) {       //printing stack with recursion
	if (s.size() == 0)
		return;
	int temp = s.top();
	s.pop();
	printStack(s);
	cout << temp << endl<<"---"<<endl;
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

	sortStack(s);
	printStack(s);


///////////////////////end-.........................

	return 0;

}


