
#include<bits/stdc++.h>

using namespace std ;

// Binery search algorithm finds value in O(logn) time
// T(n) = 1 + T(n/2) = 1 + 1 + T(n/2pow(2) = 1+1+1 + T(n/spow(3) = --- and so one  == k + T(n/2pow(k))
// if n= 2pow(k)  -->>> k = log(base 2)n

// T(2pow(k)) = k + T(1)  // O(logn)

// this algorithm works only for sorted arrays ;

bool  binerySearch(int arr[] , int r , int n , int k) {

  if(r-n == 0) return false ;

  int mid = (r+n)/2 ;

  if(k==arr[mid]) return true ;
   if(k<arr[mid])
        return binerySearch(arr , r , mid-1 , k ) ;
 if(k>arr[mid])
     return binerySearch(arr , mid+1 , n , k) ;

  }





int main (){

int n ;
int r =0;
cin >> n;

int arr[n];
for(int i=0; i < n ; i++){

    cin >> arr[i];
}
int k ;
cin >> k;


cout << binerySearch(arr , r ,n , k) << endl ;


}
