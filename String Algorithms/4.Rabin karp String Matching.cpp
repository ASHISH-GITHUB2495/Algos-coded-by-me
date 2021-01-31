#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
int dp[1000001];
int inv[1000001];



/* Insert This and try...........
 2
na
banananobano
6
foobar
foo
9
foobarfoo
barfoobarfoobarfoobarfoobarfoo

*/
int power(int a , int n)
{
	int result = 1;

	while (n)
	{
		if (n & 1) result = (result * a) % mod;

		n >>= 1;
		a = (a * a) % mod;
	}

	return result;
}


void init(string input_string)
{
	int p = 31;
	int p_power = 1;
	inv[0] = 1;
	dp[0] = (input_string[0] - 'a' + 1);


	for (int i = 1; i < input_string.size(); i++)
	{
		char ch = input_string[i];

		p_power = (p_power * p) % mod;
		inv[i] = power(p_power , mod - 2);

		dp[i] = (dp[i - 1] + (ch - 'a' + 1) * p_power) % mod;
	}
}

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

int substringHash(int L , int R)
{
	int result = dp[R];

	if (L > 0) result = (result - dp[L - 1]+mod)%mod ;
	return result;
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
	string haystack , needle;
	int n , L , R , answer;
	bool flag = false;

	while (cin >> n)
	{
		cin >> needle;
		cin >> haystack;

		int needleHash = getHash(needle);
	
		init(haystack);

		for (L = 0 , R = needle.size() - 1; R < haystack.size(); L++ , R++)
		{ 
			if ((needleHash*power(31,L))%mod== substringHash(L , R))
				cout << L << endl;
		
		}

		cout <<endl;
	}
}

