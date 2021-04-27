#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//printing keypad combination without returning whole string in vector...

void  solve(string str, string codes[], string ans) {
  
 if(str.size()==0){
  	cout<<ans<<endl;
  	return;
 }

	int ch = str[0]-'0';
	string rres = str.substr(1,str.size());

	 string s = codes[ch];

	for(int i=0;i<s.size();i++){
         
        solve(rres,codes,ans+s[i]);
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
	cin >> str;

	string codes[] = {"abc", "def", "gh", "ijkl", "mno", "pqr", "st", "uv", "wxy", "z;,"};

	 solve(str, codes,"");


///////////////////////end-........................

	return 0;

}