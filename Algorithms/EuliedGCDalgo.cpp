#include<iostream>

using namespace std ;

int main(){
int m , n ;

cin >> m >>n ;

while(m%n !=0){
    int newm = n;
     int newn = m%n;
     m = newm ;
     n =newn ;

}

cout << n << endl ;

return 0;


}
