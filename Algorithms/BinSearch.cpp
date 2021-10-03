#include<iostream>

using namespace std;

bool BinSearch(int A[] , int S , int L , int X) {

if(L==1) return A[S]==X;
int H=L/2;
if(X<A[S+H])
    return BinSearch(A , S , H , X) ;
else
return BinSearch(A , S+H ,L-H, X) ;

}


int main(){

int ArrBin[]={-23 , -9 ,1 ,2 ,45,45,76 , 98 ,203, 203,823,1032};

cout << BinSearch(ArrBin,0,12,1032)<<endl;
return 0;
}



