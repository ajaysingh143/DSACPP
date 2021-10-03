
#include<iostream>

using namespace std ;
int main(){

int a[]={1,2,3,4,5,6,7} ;
int *p = a+2 ;

cout << *p << " "<< p << " "<< endl;

int **q = &p;

cout << **q << " "<< endl;

++*q;
cout << *(a+1) << " "<< *p << " " << *(*q+1) << endl ;
return 0;


}
