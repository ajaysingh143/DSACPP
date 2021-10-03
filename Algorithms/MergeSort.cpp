#include<iostream>

using namespace std ;
 void merge(int arr[], int p, int q, int r)
    {
         int n1= q-p+1 ; int n2 = r-q ;

         int ar1[n1] , ar2[n2];

         for(int i=0; i<n1 ; i++){
             ar1[i]=arr[i+p];
         }

         for(int j=0;j<n2; j++){
             ar2[j]=arr[q+j+1];
         }

         int i=0, j=0, k=p;
         while(i<n1 && j<n2)
         {
             if(ar1[i] <= ar2[j]){
                 arr[k]=ar1[i];
                 i++;
             }
             else {
                 arr[k]=ar2[j];
                 j++;
             }
             k++;

         }

         while(i<n1)
         {

             arr[k] = ar1[i];
             i++,k++;

         }
         while(j<n2)
         {
             arr[k]=ar2[j];
             k++,j++;

         }



    }

 void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){ return ;}
         int q = (l+r)/2 ;
          mergeSort(arr,l,q);
          mergeSort(arr,q+1,r);
          merge(arr,l,q,r);

    }


int main(){
int n ;
 cin >> n ;

 int arr[n];

 for(int i=0; i < n ;i++){
    cin >> arr[i] ;
     }
  mergeSort(arr , 0 , n );

for( int i =0; i < n; i ++)
    cout<< arr[i]<<" " ;


    return 0;

  }
