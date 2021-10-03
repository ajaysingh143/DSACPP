#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream datFile("PolyNomCof.dat") ;

int n=10, A[n] ,B[n],C[20] ,c[101];

for(int i=0;i<=10 ;i++) {
    datFile>>A[i]>>B[i];
}


   cout << " this is new try " ;

cout << A[0]*B[0] << " \n ";



    for(int k=0;k<=20 ;k++)
    C[k]=0;


    for(int i=0;i<=10; i++)
     for(int j=0;j<=10; j++)
        C[i+j] += A[i]*B[j] ;



  for(int k=0;k<=20 ;k++)
    cout <<C[k] << " \n " <<endl;



   return 0;


}
