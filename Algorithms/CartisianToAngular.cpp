#include<iostream>
#include<math.h>

using namespace std ;


void CartToPolar(int &x , int &y , double &thetha , double &r ){

r = sqrt(x*x + y*y) ;
thetha = atan2(y,x) ;
return ;
}

int main(){


int x=2 , y=7 ;
double r , thetha ;

CartToPolar(x,y,thetha , r);

cout << r << " "<< thetha << endl;
return 0;

}
