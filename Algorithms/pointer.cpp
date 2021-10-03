#include<iostream>

using namespace std ;

int main(){


         int *c , *d , x , y ;

         c=&x;
         x=10;

         d = &y ;
         *d = 20;



         cout << *c + y << endl;
return 0;

         }
