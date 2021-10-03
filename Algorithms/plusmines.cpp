#include<iostream>

using namespace std;

int dataread(int arr[] , int n){


    for(int i =0; i<n;i++)
        cin>>arr[i] ;
}

int main(){
    int n ;
   int arr[n];
   cin >>n;


   dataread(arr , n);
     int a=0 , b=0 ,c=0 ;

    for(int i=0; i<n; i++ ){
        if(arr[i]>0) a += 1;
        else if (arr[i]<0) b +=1;
        else c +=1 ;
    }

   float x =a/n;
   float y=b/n;
   float z=c/n;

cout<< x<<endl;
    return 0;
}
