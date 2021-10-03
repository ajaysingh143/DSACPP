
#include<iostream>

using namespace std;

int gcd(int m , int n){

if(n==1) return n;
if(m%n!=0)
    gcd(n,m%n);
else return n;

}



int main(){

int a=155 , b=1505;
if(a>b)
  cout<< gcd(a,b);
else cout<< gcd(b,a);



return 0;


}
