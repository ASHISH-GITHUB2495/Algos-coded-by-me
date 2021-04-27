#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Friends pair 2
/*
there is n friends given .. every one has choice to pair or alone
so, you have to print out all posible combinations


Esample->
input
n=3 ;

output
(1)(2)(3)
(1)(23)
(12)(3)
(13)(2)

*/

int n;//1-n  Global var to easity accessible by all function

void friends(bool used[], int num, string ans) {


	if (num == n + 1)
	{
		cout << ans << endl;
		return;
	}
	if (used[num] == true)
		friends(used, num + 1, ans);


	//for alone
	if (used[num] == false) {
		used[num] = true;
		friends(used, num + 1, ans + "(" + to_string(num) + ")");
		used[num] = false;

		//for pair
		for (int i = 1; i <= n; i++) {
			if (i != num && used[i] == false)
			{
				used[i] = true, used[num] = true;
				friends(used, num + 1, ans + "(" + to_string(num) + to_string(i) + ")");
				used[i] = false, used[num] = false;
			}
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


	cin >> n;

	bool used[n + 1]; // store with num is used
	for (int i = 1; i <= n; i++)
		used[i] = false;

	friends(used, 1, "");



///////////////////////end-........................

	return 0;

}