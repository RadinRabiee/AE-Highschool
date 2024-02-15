#include <iostream>
using namespace std;
#include <climits>
#include <cmath>
int main() {
int n;
cin>>n;
int board[n][n];
for (int k=0;k<n;k++){
  for(int l=0;l<n;l++){
    board[k][l] = 0;
  }
}
board[0][0]=1;
int direction = 0;
int statei=0 ;
int statej = 0;
while (2+2==4){
  if(direction%4==0){
    if(statej+1<n&&board[statei][statej+1]==0){
      board[statei][statej+1]=board[statei][statej]+1;
      statej+=1;
    }
    else if(statei+1<n&&board[statei+1][statej]==0){
      direction+=1;
    }
    else{
      break;
    }
  }
  else if(direction%4==1){
    if(statei+1<n&&board[statei+1][statej]==0){
      board[statei+1][statej]=board[statei][statej]+1;
      statei+=1;
    }
    else if(statej-1<n&&board[statei][statej-1]==0){
      direction+=1;
    }
    else{
      break;
    }
  }
  else if(direction%4==2){
    if(statej-1<n&&board[statei][statej-1]==0){
      board[statei][statej-1]=board[statei][statej]+1;
      statej-=1;
    }
    else if(statei-1<n&&board[statei-1][statej]==0){
      direction+=1;
    }
    else{
      break;
    }
}
    else if(direction%4==3){
      if(statei-1<n&&board[statei-1][statej]==0){
        board[statei-1][statej]=board[statei][statej]+1;
        statei-=1;
      }
      else if(statej+1<n&&board[statei][statej+1]==0){
        direction+=1;
      }
      else{
        break;
      }
  }
}
for(int x=0;x<n;x++){
  for(int y=0;y<n;y++){
    cout<<board[x][y]<<" ";
  }
  cout<<"\n";
}
}
