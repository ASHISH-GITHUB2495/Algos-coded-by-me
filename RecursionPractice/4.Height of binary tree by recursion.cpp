#include<bits/stdc++.h>
using namespace std;

struct Node {           //Defining structure of a tree,...........
    int data; 
    struct Node* left; 
    struct Node* right; 
  
    Node(int val) 
    { 
        data = val; 
 
        left = NULL; 
        right = NULL; 
    } 
}; 

int height(Node* root)   // Getting height by recursion
{
	if(root == NULL)
		 return 0;
    else 
    	return 1+ max(height(root->left),height(root->right));
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
//////////////////////////////////////start...............
	  /*create root*/                                // creating root and its branches
    struct Node* root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->left->left = new Node(5);

  cout<<"Height of tree is: "<<height(root)<<endl; //calling and printing....

///////////////////////end-.........................
#ifndef ONLINE_JUDGE
	cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}



//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
// to sort string decending (); but with vec.rbegin()  and vec.rend();
// NOT WORKING SOMETIME IN ONLINE JUDGE

// itoa (ll, char* str , int base);
//atoi convert string to int;
//atol convert string to ;
//