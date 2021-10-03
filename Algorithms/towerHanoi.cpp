#include<bits/stdc++.h>



using namespace std ;

void towerOfhanoi( int n , char sour ,char aux , char disk  ) {

    if(n==1) {
        cout << " Move disk " <<n << " From " << sour  << " to " << disk << endl;
        return ;
    }

    towerOfhanoi(  n-1 , aux , sour , disk  ) ;

    cout << " Move Disk " << n << " from " << sour << " to " << disk << endl;
    towerOfhanoi( n-1 , aux , sour , disk) ;


  }

int main (){


int n ;
cout << "Number of Disks are :  " ;
cin >> n ;

towerOfhanoi ( n , 'A' , 'B' , 'C' ) ;

return 0;

 }
