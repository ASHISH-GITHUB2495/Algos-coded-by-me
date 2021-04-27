#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/* printing permutation of word 1 ...
 suppose -->input:  aabb

           output:  aabb
					abab
					abba
					baab
					baba
					bbaa

   instead of four factorial .. because of duplicates
   Approach 1 by me.. taking set
*/

void solve(string str,string ans,int idx,set <string> &s) {

 if(idx == str.size()){
   
   s.insert(ans);
   return;

 }



 for(int i=0;i<str.size();i++){
 	if(ans[i]=='-'){
 		ans[i]=str[idx];
 		solve(str,ans,idx+1,s);
 		ans[i]='-';
 	}
 }


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
//////////////////////////////////////start........
 string str;
 cin>>str;

 string ans=str;
 for(int i=0;i<str.size();i++) ans[i]='-';
 
 set <string> s;
solve(str,ans,0,s);

for(auto i:s)
	cout<<i<<endl;


///////////////////////end-........................

	return 0;

}