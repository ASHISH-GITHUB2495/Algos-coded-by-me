#include<bits/stdc++.h>
using namespace std;


void insert(stack <int> &s,int temp)
{
	if(s.size()==0)
	{
		s.push(temp);
		return;
	}
	int t = s.top();s.pop();
	insert(s,temp);
	s.push(t);
	return;
}
void solve(stack <int> &s)
{
  if(s.size()==0)
  	return;

  int temp = s.top();s.pop();
  solve(s);
  insert(s,temp);
  return;
}
void printStack(stack <int> s)
{
	if(s.size()==0)
		return;
	cout<<s.top()<<endl<<"--"<<endl;
	s.pop();
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
int n,data;
cin>>n;
stack <int> s;
for(int i=0;i<n;i++)
   { cin>>data;
   	s.push(data);
   }

 cout<<"\nBefore---\n"<<endl;
printStack(s);

 solve(s);

  cout<<"\nAfter---\n"<<endl;

printStack(s);
 

///////////////////////end-.........................

	return 0;

}


