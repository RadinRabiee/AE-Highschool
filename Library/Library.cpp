#include <iostream>
using namespace std;
void add_book(string book,string a[]){
    int i = -1;
    while(true){
        i+=1;
        if (a[i]==""){
            break;
        }
    }
    a[i] = book ;
    cout<<"OK";
}
int find_book(string book,string a[]){
    for(int i=0;i<1000;i++){
        if (a[i]==book){
            cout<< "book "+book+" at index " << i;
            return 0;
            break ;
        }

    }
    cout<<"book "<<book<<" do not exist .";
}

void show_books(string a[]){
    int counter = 0;
    for(int u=0;u<1000;u++){
        if (a[u]==""){
            continue ;
        }
        else{
            counter+=1;
            cout<<counter<<"."<<a[u]<<"\n";
        }
    }
}
int remove_book(string book , string a[]){
    for(int l=0;l<1000;l++){
        if(a[l]==book){
            a[l]="";
            cout<<"OK";
            return 0;
            break ;
        }
    }
    cout<<"book "<<book<<" do not exist . ";
    return 0;
}
int main()
{
string books[1000];
for(int i =0; i<1000;i++){
    books[i]="";
}
 while (true){
       string c;
       cin>>c;
       if(c=="show_books"){
           show_books(books);
       }
       else if(c=="add_book"){
           string b;
           cin>>b;
           add_book(b,books);
           
       }
       else if(c=="find_book"){
           string b;
           cin>>b;
           find_book(b,books);
       }
       else if(c=="remove_book"){
           string b;
           cin>>b;
           remove_book(b,books);
       }
       
 }
    return 0;
}
