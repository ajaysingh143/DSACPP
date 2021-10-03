
#include<iostream>
using namespace std;

int gcd(int a , int b){

  while(a%b!=0) {
        int r = b ;
        b= a%b;
        a = r ; }
  return b;

}

int lcm (int a , int b ){

int l =  a*b/gcd(a,b) ;
return l;


}

int main(){

int a , b ;
cin >>a >> b;

cout << gcd(a,b) << "\n" << endl;
cout << lcm(a,b) << "\n "<< endl;

return 0;
}
