#include<iostream>
#include<fstream>

using namespace std;

int main() {

int i ;
const int nStud=10 ;
ifstream markfile("RollNum.dat");

int rollNum[nStud]; double  Hmarks[nStud] ,Mmarks[nStud];

for(i=0;i<nStud;i++){
    markfile >> rollNum[i] >> Hmarks[i] >>Mmarks[i] ;
    cout <<Hmarks[i]<<" " << Mmarks[i] <<"\n" <<endl;
}

while(true) {

int r ; cin>> r ;
  if(r==-1) break;
  bool found =false ;

  for(i=0; i<nStud; i++) {

    if(rollNum[i]==r){
        cout << Hmarks[i] <<" Marks in Hindi and " << Mmarks[i]<<" Marks in Maths "<<endl;
        found = true;
        break ;
    }
  }
    if(!found)  cout << " Roll number not found" ;

}

/*
int i , MaxOver = marks[0];

for(i=1 ; i<10;i++) {

    MaxOver =max( MaxOver , marks[i]  ) ;
}

for(i=0;i<10 ;i++)
    if(MaxOver == marks[i]) cout << marks[i] << " of roll number "<< i+1 << endl;

*/


return 0;
}
