#include<bits/stdc++.h>
using namespace std;

void insertStack(stack <int> & s, int elem) {
	if (s.size() == 0)
	{	s.push(elem);
		return;
	}

	int temp = s.top(); s.pop();
	insertStack(s, elem);
	s.push(temp);
	return;
}


void reverseStack (stack <int> & s) {
	if (s.size() == 0)
		return;
	int temp = s.top(); s.pop();
	reverseStack(s);
	insertStack(s, temp);
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
	printStack(s);
	reverseStack(s);
	cout << "After Reverse--\n" << endl;
	printStack(s);




///////////////////////end-.........................

	return 0;

}


