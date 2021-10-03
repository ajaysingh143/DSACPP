#include<bits/stdc++.h>

using namespace std ;



// time complexity will be the same O(n_square)
// T(n) = n + T(n-1) = n(n+1)/2 = O(n_sqaure)



void recursive_selectionSort( int arr[] , int i , int n  ){

 if( i == n-1 ) return ;

 int minpos = i ;

 for(int j = minpos+1 ; j < n ; j++){

    if(arr[j]<arr[minpos])
    {
        swap(arr[j] , arr[minpos]);
    }

 }

 recursive_selectionSort( arr , i+1 , n  );


 }


int main (){



 int n ;
 cin >> n ;

 int arr[n];

 for(int i=0; i < n ;i++){
    cin >> arr[i] ;
     }

recursive_selectionSort( arr , 0 , n  );

for( int i =0; i < n; i ++)
    cout<< arr[i]<<" " ;

    return 0;

 }
