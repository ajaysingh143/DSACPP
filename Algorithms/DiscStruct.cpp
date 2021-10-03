#include<iostream>
#include<math.h>
// #include<fstream>

using namespace std;


struct Disk {
  double cx , cy , rd;   };

void dataRead( Disk d[] ,int n) {

for(int i=0; i<n;i++){
    cin >> d[i].cx >> d[i].cy>>d[i].rd;
 } }

  bool intersect(Disk d1 , Disk d2){

   pow(d1.cx - d2.cx , 2) + pow(d1.cy-d2.cy ,2) < pow(d1.rd+d2.rd ,2) ;

  }

   bool checkAllpairs( Disk d[],int n  ) {

   // checking for the intersection point for the same
   for(int i=0; i<n-1;i++)
    for(int j=i+1 ;j<n; j++)
    if(intersect( d[i] ,d[j] )) return true ;
   return false;

   }

int main() {



const int n=5 ;
Disk d[n];

dataRead(d,n);


cout << checkAllpairs(d , n) <<endl ;


}
