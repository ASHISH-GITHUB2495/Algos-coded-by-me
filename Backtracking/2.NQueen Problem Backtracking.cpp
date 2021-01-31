#define N 4
#include<bits/stdc++.h>
using namespace std;
void printMatrix(bool board[N][N])
{
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		 {
		 	cout<<board[i][j]<<" ";
		 }
		 cout<<endl;
	}
}



bool isItSafe(bool board[N][N],int row,int col){
	
	//check verticall uup
	int r=row-1;
	int c=col;

	while(r>=0){
		if(board[r][c])
			return false;
		r--;
	}
  
   //check horizontally left
	r=row;
	c=col-1;
	while(c>=0){
		if(board[r][c])
			return false;
		c--;
	}
	// diagonally left
	r=row-1;
	c=col-1;
	while(r>=0 && c>=0)
	{
		if(board[r][c])
			return false;
		r--,c--;
	}
     // diagonally right
	r=row-1;
	c=col+1;
	while(r>=0 && c<N)
	{
		if(board[r][c])
			return false;
		r--,c++;
	}
 
  return true;

    
}



void Nqueen(bool board[N][N], int row, int col, int total_queen , int curr_quenn, string ans)
{
	if (curr_quenn  == total_queen  )
	{
		/*cout << ans << endl;*/
		printMatrix(board);
		cout<<endl;
		return;
	}
	if (col == N )
	{
		row++;
		col = 0;
	}
	if (row == N)
	{ 
		return;
	}




	if (isItSafe(board,row,col))
	{
		//do
		board[row][col] = true;
		//recur
		Nqueen(board, row, col + 1, total_queen, curr_quenn + 1, ans + "["+to_string(row)+","+to_string(col)+"]" );
		//undo
		board[row][col] = false;
	
  
	}
	
		Nqueen(board, row, col + 1, total_queen, curr_quenn, ans);


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

 bool board[N][N];
 for(int i=0;i<N;i++)
 	for(int j=0;j<N;j++)
 		board[i][j]=false;

//printMatrix(board);
 Nqueen(board,0,0,N,0,"");
///////////////////////end-.........................

	return 0;

}


