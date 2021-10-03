#include<iostream>
#include<fstream>
#include<cmath>


using namespace std ;

int main()
{

int n=10 , centreX[n], centreY[n],radi[n];

ifstream centreCord("PolyNomCof.dat");

for(int i=0; i<n;i++)
centreCord >>centreX[i]>>centreY[i]>>radi[i];

bool intersect = false ;

for(int i=0;i<n-1;i++ ){

    for(int j=0;j<n;j++)
    if(  pow(centreX[i] - centreX[j] ,2 ) + pow(centreY[i]-centreY[j],2 ) > pow(radi[i]+radi[j] ,2)  ){
        intersect =true ;
        break;
    }



}


cout << intersect << endl;

return 0;

}




