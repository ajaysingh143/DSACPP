#include<iostream>

using namespace std;

long int factorial(int n){
if (n==1) return 1;
else { long int r = n*factorial(n-1) ;
return r ;
}
}
int f(int n ){

if(n==0 || n==1) return 1;
else f(n-1) + f(n-2) ;

}

int main () {
int  n ;
cin >> n ;

cout << factorial(n) << endl;
/*for(n=1 ; n<50 ; n++){

cout<< n <<")  " << f(n) << " \n " << endl;

}
*/



return 0;
}
