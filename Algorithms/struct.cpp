#include<iostream>
#include<stdio.h>

using namespace std;

struct Book{

char title[50] ;
int price;
int age;

};

// book b{  "The journey of Life",599 ,'ME18B103' };


int main(){

  struct Book b1={ "The mount boy" ,383 ,20 };
  Book b2={"the coliwid fight",837 ,9};
  Book b3={"the prices host",827,2};
  Book b4=b2;
 // cin >> b1.title[50] >>b1.price;  //>> b1.price >> b1.age ;
 // cin >> b2.title[50] >> b2.price >> b2.age ;
 // cin >> b3.title[50] >> b3.price >> b3.age ;


  cout << b1.price <<endl;
  cout << b3.age <<endl;
  cout << b2.title <<endl;
  cout << b4.age;


  return 0;
}
