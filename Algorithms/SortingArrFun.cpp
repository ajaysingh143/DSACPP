#include<iostream>

using namespace std ;


// void print(float arr[] , int N){

// for(int i=0;i<N ;i++) cout << arr[i]<<' ';
 //cout << endl;
//}

int posOfMaxInd(float Arr[] , int a){

    //find the index of the largest element in Arr
    // invariant for iteration of i : maxIndex will be the
    // index value of the max in Arr[0----i]

int i , maxIndex=0 ;

for(i=0;i<a;i++)
    if(Arr[maxIndex]<Arr[i]) maxIndex=i;
    return maxIndex;

}

void sortFun(float SortNum[] , int k){
  for (int i=k;i>1;i--){
  //print(SortNum,k);
    int maxIndex =posOfMaxInd(SortNum,i);
// cout << " found the largest number at index " << maxIndex << endl;

// int dummy ; cin >> dummy;
    float maxVal =SortNum[maxIndex];
    SortNum[maxIndex]=SortNum[i-1] ;
    SortNum[i-1]=maxVal;   // exchange completed

  }
}

int main(){

float arr[5] = {112 , 23 ,45 , 554,102};
sortFun(arr,5);

  cout<<"  After returning to main program  ";
 // print(arr,5);
 for(int i=0;i<5 ;i++) cout << arr[i]<<' ';

cout << endl;


}
