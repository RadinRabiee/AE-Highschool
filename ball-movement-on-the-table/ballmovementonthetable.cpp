#include <iostream>
using namespace std;
class table{
private:
double height ;
double width ;

public :
table(double width_,double height_){
height = height_;
width = width_;
if (height<=0 || width <=0 ){
abort;
}
}
double getHeight(){return height;}
double getWidth(){return width;}





};



class ball{
private :
double x;
double y;
double Vx;
double Vy;
table* t;
public :
ball (double x_,double y_,double Vx_,double Vy_,table* t_){
x=x_;
y=y_;
Vy=Vy_;
Vx=Vx_;
t = t_;
if(x<0 || y<0 || x>t->getWidth() || y>t->getHeight()){
abort();
	}

}
void mover(double time){
double distancex = x + Vx*time ;
int m = distancex / t->getWidth();//1
double p = distancex - m*t->getWidth() ;
if(m%2==0){
x=p;
}
else {
x=t->getWidth() - p;

}



double distancey = y + Vy*time ; 
int n = distancey / t->getHeight();
double q = distancey - n*t->getHeight();
if(n%2==0){ 
y=q;
}
else { 
y=t->getHeight() - q;

}
}

double getx(){
return x;
}
double gety(){
return y;
}

};




int main(){










}
