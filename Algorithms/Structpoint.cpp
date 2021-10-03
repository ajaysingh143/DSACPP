#include<iostream>

using namespace std ;

struct Point {
double x,y;

 };
struct Disk {
    Point center ;
    double  rd ;


 };





int main(){
Disk d = { { 3, 5} ,9 } , *dptr ;

dptr = &d ;

(*dptr).center.y = 8 ;

 cout << d.center.y << endl;
 cout << dptr->center.x << endl;


 }



