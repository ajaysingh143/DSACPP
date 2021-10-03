
#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
int l;
char nameArr[5] , textArr[80];

cin.getline(textArr,80);

cout << textArr <<endl;
cin >> nameArr;
cout << nameArr << "\n";


l=0;
while(textArr[l]!='\0') l++;



for(int i=0 ;i<l ;i++)
cout << textArr[l-1-i];



return 0;

}
