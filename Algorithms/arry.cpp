#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n ;
     scanf("%d\n" , &n);
     int arr[n];
     int i=0 ;
     for( i=0 ; i<n+1 ; i++ ){
        scanf("%d",&arr[i]);
        }


     for(i=n-1;i>0 ;i--)
      {
        arr[i]=arr[n-1-i];
        printf("%d " ,arr[i] );
      }


    return 0;
}

