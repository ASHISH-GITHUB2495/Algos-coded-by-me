#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


//printing permutations of string  ... print only


void printPermutations(string str,string ans){

   if(str.size()==0){
   	cout<<ans<<endl;
   	return;
   }
  
    
    for(int i=0;i<str.size();i++){
        string str2 = str;
    	char ch = str[i];
         str2.erase(i,1);
    	printPermutations(str2,ans+ch);
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

   printPermutations(str,"");



///////////////////////end-........................

	return 0;

}