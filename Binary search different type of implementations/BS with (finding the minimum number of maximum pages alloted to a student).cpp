#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container

bool isValid(int max, int arr[], int k, int n)
{	int student = 1;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];

		if (sum > max)
			sum = arr[i] , student++;

		if (student > k)
			return false;

	}
	return true;
}


int BS_AllocateMinimumNumberPages(int max , int sum , int arr[] , int k, int n)
{
	int start = max , end = sum;
	int res = -1;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (isValid(mid, arr, k, n))
			res = mid, end = mid - 1;

		else
			start = mid + 1;

	}

	return res;
}


int main()
{

//////////////////////////////////////start...............
	//  HERE THE FAMOUS PROBLEM -- ALLOCATING MINIMUM NUMBER OF MAXIMUM PAGES TO A STUDENT---

	/*	PROBLEM -
	
		Here you have given books 'n' and their all have some pages and also you have given 'k' numbers of 
		students.

		here you will have to distribute the books among the students ... criterias is
		 -- both of them atleast get 1 book and all books should be destributed;
		 -- distribution is must me continuos as 'book 1'  , 'book 2' ..

		you have to find the minimum number of pages that the 
		 student with highest pages with it.


	*/





	int n;
	cout<<"Enter the number of books\n";
	cin >> n;

	int arr[n];
	int max = -1; //to keep maximum number of pages
	int sum = 0; // to keep sumof pages
    cout<<"Enter you no. of pages in each book sequencially\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
		sum = sum + arr[i];
	}
    cout<<"Enter no. of students\n";
	int k;
	cin >> k;

	if (k > n)                //no. of students is more
		cout << "\n--->Its impossible to distribute\n";
	else
	{
		int i = BS_AllocateMinimumNumberPages(max, sum, arr, k, n);
		cout << "\n--->the minimum  of maximum pages allocated to a student is " << i << endl;
	}



////////////////////////////////////////end-.........................

	return 0;

}


