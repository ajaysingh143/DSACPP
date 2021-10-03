#include<bits/stdc++.h>

using namespace std ;

// we have to scan entire arr to find minimum value everytime
// it takes O(n square) time to sort entire array
// T(n) = n + n-1 + n-2 + n-3 --------  1 = n(n+1)/2 = n-square/2 + n/2 = O(n-square)  we just neglect constants and small terms as of now



int main(){


 int n ;
 cin >> n ;

 int arr[n];

 for(int i=0; i < n ;i++){
    cin >> arr[i] ;
     }

     for(int i=0; i < n ;i++){
   cout << arr[i] << " ";
     }
     cout << endl << endl ;
     cout << endl << endl ;


for(int i =0; i < n ; i++){

    for(int j=i+1; j < n; j++){

        if(arr[j]<arr[i])
        { int temp = arr[i];
          arr[i] = arr[j] ;
          arr[j] = temp;
        }
      }
   }

for( int i =0; i < n; i ++)
    cout<< arr[i]<<" " ;

    return 0;

  }




