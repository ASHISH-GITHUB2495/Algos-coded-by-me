#include<bits/stdc++.h>
using namespace std;

#define int long long


bool match(string t,string p,int l ,int r){

	for(int i=0;i<p.size();i++)
		 if(t[l+i] != p[i]) return false;

	return true;
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
//////////////////////////////////////start............
	string T,P;

getline (cin,T);
getline(cin,P);
cout<<"hii"<<endl;

for(int l=0,r=P.size()-1;r<T.size();l++,r++){
	if(match(T,P,l,r))
		cout<<l<<" ";

}






///////////////////////end-.........................

	return 0;

}


