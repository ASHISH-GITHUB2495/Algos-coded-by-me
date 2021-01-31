#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 10000000007



int getHash(string key)
{
	int value = 0;
	int p = 31;
	int p_power = 1;

	for (char ch : key)
	{
		value = (value + (ch - 'a' + 1) * p_power) % mod;
		p_power = (p_power * p) % mod;
	}

	return value;
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
//////////////////////////////////////start............


	string key;

	cout << "enter key\n";
	cin >> key;

	cout << "Key : " << key << " Hash : " << getHash(key) << endl;



///////////////////////end-.........................

	return 0;

}


