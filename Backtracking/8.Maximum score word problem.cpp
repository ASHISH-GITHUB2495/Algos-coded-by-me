#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Maximum score of word problem..

/*
input :- 4
		 dog cat dad good
		 9
		 a b c d d d g o o
		 1 0 9 5 0 0 3 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0


Basically, we have to find subsets from given words (dog,cat,dad,good)
(possible 2^n=16 subsets) such that the frequency of each charcter in the
subset not exceeds (a b c d d d g o o) given characters. Now, from these subset
count each subset score by given character scores and return the maximum one.

*/

int solve(string words[], unordered_map <char, int> freq, int score[], int idx , int n) {
	//we have index of starting of words string ... now each word has choice to
	//be part of a subset or not;

	if (idx == n)
		return 0;



	int sno = 0 + solve(words, freq, score, idx + 1, n); // words[idx] not included


	//to include....
	int sword = 0;
	bool flag = true;//true means include
	string word = words[idx];
	for (int i = 0; i < word.size(); i++) {


		if (freq[word[i]] == 0) {

			flag = false;

		}
		freq[word[i]]--;
		sword += score[word[i] - 'a'];
	}



	int syes = 0;
	if (flag) {
		syes = sword + solve(words, freq, score, idx + 1, n);
	}

	// fill freqency again which we have changed
	for (int i = 0; i < word.size(); i++)
		freq[word[i]]++;

	return max(sno, syes);

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

	int n;
	cin >> n;
	string s;
	string words[n];
	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}
	int m;
	cin >> m;
	char letters[m];
	for (int i = 0; i < m; i++)
		cin >> letters[i];
	int score[26];
	for (int i = 0; i < 26; i++)
		cin >> score[i];

	//from letter getting frequencies
	unordered_map<char, int> freq;
	for (int i = 0; i < m; i++)
		freq[letters[i]]++;



	cout << solve(words, freq, score, 0, n);

///////////////////////end-........................

	return 0;

}