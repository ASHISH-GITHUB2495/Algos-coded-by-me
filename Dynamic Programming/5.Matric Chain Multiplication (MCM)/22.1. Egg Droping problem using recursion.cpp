#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

#define int long long
#define mod 1073741824

/*
Egg Droping Problem ...
where we have to find Minimum number of attempts in worst case...

*/

int EggDrop(int egg, int floor) {

	if (floor == 0 || floor == 1 )
		return floor;
	if (egg == 1)
		return floor;

	int attempts = INT_MAX;

	for (int k = 1; k <= floor; k++) {

		int temp =1+ max(EggDrop(egg- 1, k- 1), EggDrop(egg, floor - k));
		attempts = min(attempts, temp);

	}
	return attempts;
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

	int e, f;
	cin >> e >> f;

	cout << "Minimum number of attempts in worst case is : " << EggDrop(e, f)<<endl;




///////////////////////end-.........................

	     return 0;

}


