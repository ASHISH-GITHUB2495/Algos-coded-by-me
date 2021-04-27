#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


//get maze path with jump and diagonal ... print only


void getMazePaths(int sr, int sc, int dr, int dc,string ans) {

	if (sr == dr && sc == dc) {
		cout<<ans<<endl;
		return ;
	}
	if (sr > dr || sc > dc) {
		return ;
	}

	for(int i=1;i<=dc;i++)
       getMazePaths(sr,sc+i,dr,dc,ans+" h"+to_string(i));
   for(int i=1;i<=dr;i++)
       getMazePaths(sr+i,sc,dr,dc,ans+" v"+to_string(i));
   for(int i=1;i<=max(dr,dc);i++)
       getMazePaths(sr+i,sc+i,dr,dc,ans+" d"+to_string(i));


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


	getMazePaths(1, 1, 3, 3,"");



///////////////////////end-........................

	return 0;

}