#include<iostream>

using namespace std;

struct V3 {
   double x,y,z;
   V3(double a , double b , double c){  x=a ; y=b ; z=c ;}

   V3 operator+(V3 b) { return   V3(x+b.x ,y+b.y , z+b.z);}

   V3 operator*(double f) {return V3(x*f , y*f, z*f);    }


};


int main(){

V3 u(1,2,4) , a(3,4,5) , s(0,0,0);

double t=10;

s=u*t + a*t*t*0.5;

cout << s.x << ' ' << s.y << ' ' << s.z << endl;

}
