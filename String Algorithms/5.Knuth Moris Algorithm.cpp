#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1073741824

int pi[200001];

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
string pat,text;
cin>>text>>pat;

/*We are using KMP algorithm here.............*/
/*initialising*/
string st = pat+"#"+text;

for(int i=1;i<st.size();i++){
	int j=pi[i-1];

   while(j>0 && st[i]!=st[j])
   	j = pi[j-1];

    j++;

    pi[i]=j;
}

//Now we are going to print the 
//first index of the substring of text where pattern matches

for(int i=pat.size();i< st.size();i++)
 if(pi[i]==pat.size())
 	cout<<i-pat.size()*2<<endl;

///////////////////////end-.........................

	return 0;

}


