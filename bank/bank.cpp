#include <iostream>
#include <vector>
using namespace std;
vector <int> ids;
vector <double> balances;

void balance(int id){
int n=0;
for (int i =0;i<ids.size();i++){
if(ids[i]==id){
cout<<balances[i]<<"\n";
n=1;
}
}
if(n==0){
cout<<"not found.\n";
}


}

void deposit(int id,double value){
int n=0;
for(int i=0;i<ids.size();i++){
if (id==ids[i]){
balances[i]=value;
cout<<"ok\n";

n=1;
}
}
if (n==0){
ids.push_back(id);
balances.push_back(value);
}

}

void withdraw(int id,double value){
double v=0;
int n=0;
for(int i =0;i<ids.size();i++){
if (ids[i]==id){
v=balances[i]-value;
n=1;
if(v<0){
cout<<"not enough money\n";
}
else{
cout<<"OK\n";
balances[i]=v;
}
}
}
if (n==0){
cout<<"id not found\n";
}
}




int main(){
while(true){
string c;
cin>>c;
if(c=="BALANCE"){
int id;
cin>>id;
balance(id);

}
if(c=="DEPOSIT"){
int id;
cin>>id;
double value ;
cin>>value;
deposit(id,value);




}

if (c=="WITHDRAW"){
int id;
cin>>id;
double value;
cin>> value;
withdraw(id,value);

}
}

}
