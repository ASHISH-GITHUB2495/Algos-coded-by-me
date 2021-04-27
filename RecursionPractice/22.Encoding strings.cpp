#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007


//printing possible encodings of string  ... print only


void encode(string str, char encodes[], string ans) {

	if (str.size() == 0) {
		cout << ans << endl;
		return;
	}



		int num = str[0] - '0';
		string str2 = str;
		str2.erase(0, 1);
		encode(str2, encodes, ans + encodes[num]);

		if (0+1 <str.size()) {

			num = (num * 10) + (str[0 + 1] - '0');
			str2 = str;
			str2.erase(0, 2);
			encode(str2, encodes, ans + encodes[num]);

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

	char encodes[] = {'-', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	                  'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	                 };

	//ie , 0 to 26...0 actually exclude;

	string str;
	cin >> str;

	encode(str, encodes, "");


///////////////////////end-........................

	return 0;

}