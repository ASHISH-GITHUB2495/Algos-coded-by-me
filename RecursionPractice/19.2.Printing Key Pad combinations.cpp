#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007
//there are nine keypads and codes of them given you have to print possible words
// Get key pad combination
vector<string >  solve(string str, string codes[]) {
	if(str.size()==0){
		vector<string> v;
		v.push_back("");
		return v;
	}


	int num = str[0] - '0';
	string red = str.substr(1, str.size() );

	vector<string > rres = solve(red, codes);

	vector<string> res;

   for(int i=0;i<codes[num].size();i++){
   	    char ch = codes[num][i];

   	    for(int j=0;j<rres.size();j++){
            res.push_back(ch+rres[j]);
   	    }
   }



return res;


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

	vector<string> v = solve(str, codes);

	for(auto i:v){
		cout<<i<<endl;
	}

///////////////////////end-........................

	return 0;

}