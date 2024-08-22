#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool search(string a , vector <string> l ){
  for (int i = 0;i<l.size();i++){
    if (l[i]==a){
      return true;
    }
  }
  return false ;
}
vector <string> aremove (string a , vector <string> l ){
  vector <string> n ;
  int count = 0 ;
  for (int i = 0 ; i<l.size() ; i++){
    if(!(l[i]==a && count == 0)) {
      n.push_back(l[i]);
    }
    else {
      count += 1;
    }
  }
  return n;
}
int main(){
  vector <string> caroptions = {"peykan,number = 0 . ","pride,number = 1 .","206,number = 2 ."};
  vector <int> carprizes = {100,200,300};
  vector <int> sellprizes = {200,400,600};
  vector <string> boughtcars ={} ;
  vector <int> solds;
  int hesab = 1000;
  while (true) {
    cout<<"\n-----------------welcome to our shop bro----------------------\n";
    cout<<"cars of shop  :\n";
    for (int i = 0 ; i<boughtcars.size();i++) {
      cout<<boughtcars[i]<<"\n--------------\n";
    }
    cout<<"cars of factory :\n";
    for (int i = 0 ; i<caroptions.size();i++) {
      cout<<caroptions[i]<<"buying price :"<<carprizes[i]<<"--"<<"selling price :"<<sellprizes[i]<<"--"<<"our benifit : "<<sellprizes[i]-carprizes[i]<<"\n--------------\n";
    //  cout<<caroptions[i]<<"selling price :"<<sellprizes[i]<<"\n--------------\n";

    }
    cout <<"your balance : "<<hesab <<"\n-----------------------\n";
    cout<<"what do you want to do (type sell or buy) ? \n"<<"1)sell \n"<<"2)buy\n";
    string work ;
    cin>>work;
    if (work=="buy"){

        cout<<"which do you want to buy ? enter the number bro \n";
        int carsell ;
        cin>>carsell;
        if (!(carsell>=0 && carsell < caroptions.size())){
          cout<<"we don't have your car .\n -----------\n";
          continue ;
        }
        else if(carprizes[carsell]>hesab) {
          cout<<"you don't have enough money bro . \n ";
          continue;
        }
        else if (boughtcars.size()==3){
          cout<<"you can't have more than 3 cars bro \n ";
        }
        else {
          hesab -= carprizes[carsell];
          boughtcars.push_back(caroptions[carsell]);
          cout<<"congrats . you bought a new car bro \n";
          //sold.push_back(carsell);
          continue;
        }
      }
    if (work=="sell" ){
        cout<<"which do you want to sell ? enter the number bro \n";
        int carbuy ;
        cin>>carbuy;
        if(carbuy>2 || carbuy<0) {
          cout<< "there is no such car in the shop ";
          continue;
        }
        else if (!(search(caroptions[carbuy],boughtcars))){
          cout<<"you don't have this car man :| ";
          continue ;

        }
        else {
          hesab += sellprizes[carbuy];
          boughtcars=aremove(caroptions[carbuy],boughtcars);
          cout<<"congrats ; you sold your car bro ;";

        }
    }

    }
  }
