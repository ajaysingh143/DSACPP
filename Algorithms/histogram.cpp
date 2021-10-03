#include<iostream>

using namespace std;


int main() {

int marks, Students = 10 , buckets = 11 ;

int hist [buckets];

for( int n=0;n<buckets ; n++)
    hist[n]=0;


for(int n=0 ; n<10 ; n++) {

cin >> marks;
    cout << " Marks of Roll No " << n+1 << " is " << marks<< endl;
    hist[ (marks)/10 ]++;
}


for( int n=0; n<buckets ; n++)
   cout << 10*n << " to " << n*10+9 << " :  " << hist[n] << endl;


return 0;


}
