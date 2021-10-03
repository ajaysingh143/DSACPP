
#include<iostream>

using namespace std ;


double arrPoint(double* M,int a){

    double sum =0 ;

    for(int i=0;i<a;i++)
        sum += M[i];

 return sum/a;
}




int main() {

double q[] = {1,3,5,2 ,3} ;

cout << arrPoint(q,5) << endl;;


return 0;
}
