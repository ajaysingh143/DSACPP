#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int* g(){
    int *p;     // p is local to g()
    p = new int ;  // p points to heap memory

    *p = 10;    // value 10 stored in the heap memory
    return p;    // the value of p has returned

   }

int main(){

int *q =g();  // g gets called

char* cptr ;    // creates character pointer

cptr = new char[10] ;   // allocated memory of array 10
  // array can be accessed as usual
  //cptr[0] ------ to cptr[9]

cout << *q << endl;   // now q gets the address of heap memory where 10 is stored which was allocated to g()


 // *q is got printed which is 10;

 delete[] cptr ;
delete q;

// storing many names in  heap memory

char* names[10];
for(int i=0;i<10;i++){

    char buffer[15]; cin>> buffer;


    int L = sizeof(buffer)+1 ;   // return the number of character till find \0; and +1 for extra space of \0;
    cout << L << endl;

    names[i] = new char[L] ;
    for ( int j=0;j<L;j++) {
        names[i][j]=buffer[j];
       cout << names[i][j] << endl;   }

}





}
