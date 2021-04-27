#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
Pallindrome Permutation of a string 

*/
void solve(string str,int idx,char ans[],char mid){
   if(idx == str.size()){
    
    for(int i=0;i<str.size();i++)
    	cout<<ans[i];
    if(mid!='*')
    	cout<<mid;
    for(int i=str.size()-1;i>=0;i--)
    	cout<<ans[i];
    cout<<endl;
    return;

   }




    for(int i=0;i<str.size();i++){
    	if(ans[i]=='-'){
    		ans[i]=str[idx];
    		solve(str,idx+1,ans,mid);
    		ans[i]='-';
    	}
    }

return;

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

	unordered_map <char, int> u;
	for (auto i : str)
		u[i]++;

	int numodds = 0, numeven = 0; char odchar;
	string new_string; // which we apend with its reverse
	for (auto i :  u) {
		if (i.second % 2 == 0)
			numeven++;
		else
			numodds++ , odchar = i.first;

		for (int j = 0; j < (i.second) / 2; j++)
			new_string.push_back(i.first);


	}


	if (numodds > 1)
		cout << "not possible" << endl;
	else{
  


		char ans[new_string.size()];
		for(int i=0;i<new_string.size();i++)ans[i]='-';
		if(numodds==1)
		 solve(new_string,0,ans,odchar);
		else
			odchar='*',	 solve(new_string,0,ans,odchar);

			
	}



///////////////////////end-........................

	return 0;

}