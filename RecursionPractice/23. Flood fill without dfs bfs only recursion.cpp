#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


//Flood Fill
/*
 Given a grid with some 1s which are obstacles and 0s which are open...
 you have to output the possible paths not repeated...
 like TDDURL..etc

*/

/*
sample input
6 7
0 1 0 0 0 0 0
0 1 0 1 1 1 0
0 0 0 0 0 0 0
1 0 1 1 0 1 1
1 0 1 1 0 1 1
1 0 0 0 0 0 0
output


*/

int grid[100][100];
int vis[100][100];

void floodFill(int sr, int sc, int dr, int dc, string ans) {
	//cout<<ans<<endl;
	vis[sr][sc]=1;
	vis[dr][dc]=0;
	if (grid[sr][sc] == 1)
	{return;}
	if (sr == dr && sc == dc )
	{
		cout << ans << endl;
		return;
	}


	if (sc - 1 >= 1 && vis[sr][sc-1] != 1) //left
		floodFill(sr, sc - 1, dr, dc, ans + "L");


	if (sr - 1 >= 1 && vis[sr-1][sc] != 1) //up
		floodFill(sr - 1, sc , dr, dc, ans + "U");

	if (sc + 1 <= dc && vis[sr][sc+1] != 1) //right
		floodFill(sr, sc + 1, dr, dc, ans + "R");

	if (sr + 1 <= dr && vis[sr+1][sc] != 1) //down
		floodFill(sr + 1, sc , dr, dc, ans + "D");

	vis[sr][sc]=0;

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

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> grid[i][j];
			vis[i][j] = 0;
		}
	}

	floodFill(1, 1, n, m, "");

///////////////////////end-........................

	return 0;

}