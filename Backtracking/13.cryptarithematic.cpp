#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//crytarithematic
/*
Such that you have given 3 string ..
you have to map the characters form 0-9 ..
such that the ..sum of two string is equal to third one...

Esample->
send more money

 send            9 5 7 6
 more +          1 0 8 5
------     => ----------
money          1 0 6 5 2
-----        -----------

if  6-7 , e - 5, m -1 , n- 6,o - 0 , r -8 , s-9,y-2.


*/
string s1, s2, s3; // Global var to easily used by functions

int convertToNum(string s, unordered_map<char, int> map) {

	int num = 0;
	for (int i = 0; i < s.size(); i++) {
		num += map[s[i]];
		num *= 10;

	}
	num /= 10; //cout << "hii from convert " << num << endl;
	return num;

}



void crytarithematic(string unique , unordered_map<char, int> map, bool usedDigit[], int idx) {

	if (idx == unique.size()) {
		int dig1 = convertToNum(s1, map);
		int dig2 = convertToNum(s2, map);
		int dig3 = convertToNum(s3, map);
		//cout<<dig1<<" "<<dig2<<" "<<dig3<<endl;

		if ((dig1 + dig2) == dig3) {
			//print map
			for (auto i : map)
				cout << i.first << " <-> " << i.second << ", ";
			cout << endl;
			
		}

		return;
	}






	for (int i = 0; i < 10; i++) {
		if (!usedDigit[i]) {
			//cout << "hii" << endl;
			map[unique[idx]] = i;
			usedDigit[i] = true;

			crytarithematic(unique, map, usedDigit, idx + 1);

			map[unique[idx]] = -1;
			usedDigit[i] = false;

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

	cin >> s1 >> s2 >> s3;

	set <char> s;   //contains uninque characters from all string
	for (int i = 0; i < s1.size(); i++)
		s.insert(s1[i]);
	for (int i = 0; i < s2.size(); i++)
		s.insert(s2[i]);
	for (int i = 0; i < s3.size(); i++)
		s.insert(s3[i]);


	string unique;              //set is converted to string to pass it to function
	unordered_map <char , int> map; //for mapping of characters , intially all are -1

	for (auto i : s)
		map[i] = -1, unique += i;

	bool usedDigit[10];  //keeps digit is used or not .. from 0-9, initially false to all
	for (int i = 0; i < 10; i++)usedDigit[i] = false;


	crytarithematic(unique, map, usedDigit, 0);







///////////////////////end-........................

	return 0;

}