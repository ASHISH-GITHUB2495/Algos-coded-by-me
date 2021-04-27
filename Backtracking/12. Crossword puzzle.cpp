#include<bits/stdc++.h>         //ctrl+alt+f for formate
using namespace std;

#define int long long
#define mod 100005007

//Cross word puzzle... you can put horizontal and vertical words only
/*
You have given a grid '+' or '-' character..
 fill the words in '-' character ...

 sample input:
4
DELHI ICELAND ANKARA LONDON
10 10
+ - + + + + + + + +
+ - + + + + + + + + 
+ - + + + + + + + +
+ - - - - - + + + + 
+ - + + + - + + + + 
+ - + + + - + + + + 
+ + + + + - + + + +
+ + - - - - - - + + 
+ + + + + - + + + + 
+ + + + + - + + + +

*/

int  wl, n, m;
char wordGrid[1000][1000];
string words[100];

bool isHorizontalPossible(string word, int r, int c) {
	int ws = word.size();
	//checking horizontal corners
	if (c > 0 && wordGrid[r][c - 1] != '+')
		return false;
	if (c + ws < m && wordGrid[r][c + ws] != '+')
		return false;

	//checking whole word
	for (int j = 0; j < ws; j++) {
		if (c + j > m - 1 )
			return false;
		if (wordGrid[r][c + j] == '+' || ( wordGrid[r][c + j] != '-' && wordGrid[r][c + j] != word[j] ))
			return false;
	}
	return true;


}
bool isVerticalPossible(string word, int r, int c) {
	int ws = word.size();
	//checking vertical corners
	if (r > 0 && wordGrid[r - 1][c] != '+')
		return false;
	if (r + ws < n  && wordGrid[r + ws][c] != '+')
		return false;
	//checking whole word
	for (int i = 0; i < ws; i++) {
		if (r + i > n - 1 )
			return false;

		if (wordGrid[r + i][c] == '+' || (wordGrid[r + 1][c] != word[i] &&  wordGrid[r + 1][c] != '-'))
			return false;
	}

	return true;

}



void crossword(string words[], int widx) {

	if (widx == wl) {
		//print it
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << wordGrid[i][j] << " ";
			cout << endl;
		}
		return ;

	}

	//we take out the ith word form words of string
	string word = words[widx];


	//we gonna give each word chance to get at every possible cordinate
	//and try out it fits horzontally or vertically from there.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//this valid spot to start...
			if (wordGrid[i][j] == '-' || wordGrid[i][j] == word[0]) {
				if (isHorizontalPossible(word, i, j)) {
	
					//here we place horizontally and keep the array we place the letter or not
					bool wePlaced[word.size()];
					for (int k = 0; k < word.size(); k++)
						if (wordGrid[i][j + k] == '-')
							wePlaced[k] = true, wordGrid[i][j + k] = word[k];
						else
							wePlaced[k] = false;
					//here we call new word
					crossword(words, widx + 1);
					//here we unplace
					for (int k = 0; k < word.size(); k++)
						if (wePlaced[k] == true)
							wordGrid[i][j + k] = '-';

				}
				else if (isVerticalPossible(word, i, j)) {
				
					bool wePlaced[word.size()];
					for (int k = 0; k < word.size(); k++)
						if (wordGrid[i + k][j] == '-')
							wePlaced[k] = true, wordGrid[i + k][j] = word[k];
						else
							wePlaced[k] = false;

					crossword(words, widx + 1);

					for (int k = 0; k < word.size(); k++)
						if (wePlaced[k] == true)
							wordGrid[i + k][j] = '-';
				}
			}

		}
	}
	return;

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
	cin >> wl;

	for (int i = 0; i < wl; i++)
		cin >> words[i];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> wordGrid[i][j];


	crossword(words, 0);


///////////////////////end-........................

	return 0;

}