#include <iostream>
using namespace std;

int main() {
int n ;
cout<<"Enter the number of numbers : ";
cin >> n ;
cout<<"Enter "<<n<<" numbers : ";
int array[100];
for(int y =0 ; y<n ; y++){
  cin>>array[y];
}
// SelectionSort algorithm :
for(int pointer=0;pointer<n-1;pointer++){
  int min = INT_MAX ;
  int minindex;
  for(int i=pointer;i<n;i++){
    if (array[i]<min){
      min=array[i];
      minindex=i;
    }
  }
  // swap the minimum element with the pointerth element 
  int tmp=array[pointer];
  array[pointer]=min;
  array[minindex]=tmp;
}
// print the output
cout<<"The sorted list : ";
for (int p=0;p<n;p++){
  cout<<array[p]<<" ";
}
cout<<"\n";
}
