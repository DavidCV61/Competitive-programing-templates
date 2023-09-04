#include <bits/stdc++.h>
 using namespace std;


 bool canPlace(int board[][20],int n, int x, int y){
 	for(int k=0;k<n;k++){
 		if(board[k][y]==1)
 			return false;
 	}

 	int i=x;
 	int j=y;
 	while(j>=0 && i>=0){
 		if(board[i][j]==1) return false;
 		i--;
 		j--;
 	}

 	i=x;
 	j=y;
 	while(i>=0 && j<n){
 		if(board[i][j]==1) return false;
 		i--;
 		j++;
 	}

 	return true;
 }

 void print(int board[][20],int n){

 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cout<<board[i][j]<<" "; 
 		}
 			cout<<endl;
 }
 	}
 

 bool solverqueen(int n,int board[][20],int i){

 	if(n==i){
 		print(board,n);
 		return true;
 	}

 	for(int j=0;j<n;j++){
 		if(canPlace(board,n,i,j)){
 			board[i][j]=1;
 			bool sucess=solverqueen(n,board,i+1);
 			if(sucess) return true; 
 			board[i][j]=0;

 		}
 	}
 	return false;

 }

int main() {
int board[20][20]={0};
int n;
cin>>n;
solverqueen(n,board,0);


return 0;
}
