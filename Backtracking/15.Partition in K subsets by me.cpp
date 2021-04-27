#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

/*
you have given n and k .. you have partion 1-k into k subsets.
12|3|4  12|4|3  3|12|4 all are same

get unique only

*/

void solve(int banda , vector <string> seats, int n) {
 


   if(banda == n+1){
  ;
        for(int i=0;i<seats.size();i++)
        	if(seats[i].size()==0)
        		return;
        cout<<"|";
        for(int i=0;i<seats.size();i++){
        	for(int j=0;j<seats[i].size();j++)
        		cout<<seats[i][j];
        	cout<<"|";
        }
        cout<<endl;
        return;

   }

	for (int i = 0; i < seats.size(); i++) {    
		seats[i] += to_string(banda);
		solve(banda + 1, seats,n);
		seats[i].pop_back();
		if (seats[i].size() == 0)
			break;


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

	int n, k;
	cin >> n >> k;

	if (n < k)
		cout << "Not possible" << endl;
	else if (k == 1) {
		cout << "(";
		for (int i = 1; i <= n; i++) cout << i;
		cout << ")" << endl;
	}
	else if (n == k) {
		for (int i = 1; i <= n; i++)cout << "(" << i << ")";
		cout << endl;
	} else if (n == 0 || k == 0 )
		cout << "0" << endl;
	else {

		vector<string> seats;
		for (int i = 0; i < k; i++) seats.push_back("");

		solve(1, seats, n);






	}




///////////////////////end-........................

	return 0;

}