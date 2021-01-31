#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 10000000007



int dp[100001];//storing hash value of string upto each character
int inv[100001];//storing inverse


void preprocessing(string s) {
	int p = 31;
	int power = 1;
	inv[0] = 1;
	dp[0] = (s[0] - 'a' + 1);


	for (int i = 1; i < s.size(); i++) {
        char ch=s[i];;

        power = (power * p) % mod;
        inv[i]=pow(power,mod-2);

		dp[i]=(dp[i-1]+(ch-'a'+1)*power)%mod;
		

	}
	return;
}
int substringHash(int l,int r){
	int result = dp[r];
	if(l>0) result -= dp[l-1];
	result = (result  * inv[l])%mod;
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
	string bigString;
	

	int n, l, r;
	cin >> bigString;
    preprocessing(bigString);
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> l >> r;
		cout << substringHash(l, r) << endl;
	}


///////////////////////end-.........................

	return 0;

}


