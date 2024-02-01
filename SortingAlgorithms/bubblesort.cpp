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
// BubbleSort algorithm :
for(int pointer=0;pointer<n-1;pointer++){
  for(int i=0;i<n-pointer-1;i++){
    if (array[i]>array[i+1]){
      // Swap the elements :
      int tmp = array[i];
      array[i]=array[i+1];
      array[i+1]=tmp;
    }
  }
}
// print the output
cout<<"The sorted list : ";
for (int p=0;p<n;p++){
  cout<<array[p]<<" ";
}
cout<<"\n";
}
