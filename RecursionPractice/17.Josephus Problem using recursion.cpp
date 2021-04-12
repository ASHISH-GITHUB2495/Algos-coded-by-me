#include<bits/stdc++.h>
using namespace std;

void josephus(vector<int> v, int index,int k)
{
	if(v.size()==1)
	{
		cout<<v[0]<<endl;
		return;
	}
  index = (index + k)%v.size();
  v.erase(v.begin()+index);
  josephus(v,index,k);
 return;
}



int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............
	int n,k;
	cin >> n>>k;
	int index=0;
	vector<int> v(n);
	
	for(int i=0;i<n;i++)
		v[i]=i+1;

	josephus(v,index,k-1); // k-1 because of 0 index of array

///////////////////////end-.........................

	return 0;

}


