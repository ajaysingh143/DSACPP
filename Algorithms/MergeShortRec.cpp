#include<iostream>

using namespace std ;

int maxIndex(int A[] , int N){

int MxInd=0 ;
for(int i=0;i<N;i++)
    if(A[MxInd]<A[i]) MxInd = i;
    return MxInd;
}

int mergeShort(int B[] , int N){

for(int i=N;i>1 ; i--){

int maxInd = maxIndex(B ,i);

    int maxVal= B[maxInd]  ;
  B[maxInd] = B[i-1] ;
       B[i-1] = maxVal;
}

}


void MergePerform(int A[] , int N , int B[] , int K , int Arr[]){

int ua=0 , vb=0 ;

for(int sb =0 ; sb<N+K ; sb++){
    if(ua<N && vb<K )
{
    if(A[ua]<B[vb])
        { Arr[sb]=A[ua] ; ua++;   }
    else
     { Arr[sb] = B[vb] ; vb++; }
}
 else  if(ua<N)
       { Arr[sb]=A[ua]; ua++;   }
 else
       { Arr[sb]=B[vb]; vb++;   }

       }}



int main (){

int n=7,ArrFul[n]={45, 4 , 102 ,9 , 2 , 99 , 102};


int V[n/2] , U[n-n/2];

for(int i=0;i<n/2;i++){
    V[i]=ArrFul[i] ;
   // cout <<[i] << "  ";   }
}
for(int i=0;i<n-n/2 ;i++) {
    U[i]=ArrFul[i+n/2];
  //  cout <<U[i] << "  ";
}
 mergeShort( V,n/2 );
 mergeShort(U,n-n/2);


MergePerform( V, n/2 , U, n-n/2, ArrFul );

 for(int i=0;i<n;i++)
 cout << ArrFul[i] <<" \n " << endl;

}
