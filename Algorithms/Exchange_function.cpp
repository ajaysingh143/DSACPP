#include<iostream>
using namespace std ;

// & used as a reference parameter that reflects the value to a and b.
void exchange(int &m , int &n){

int exc =m;
      m=n;
      n=exc ;
      return ;

}


int main(){


int a=21 , b =31 ;

exchange(a,b);

cout << a << " " << b << endl;
 return 0;


}
