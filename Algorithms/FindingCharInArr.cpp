#include<iostream>
#include<stdio.h>
using namespace std ;


bool FindingChar(char x , char *arrText){

for(int i=0;arrText[i]!='\0';i++){
    if(arrText[i]==x) return true;
   ;
}
  return false;
}



int main() {
char x ;
char arrtext[80] ;
cin.getline(arrtext,80);


cout << FindingChar('s',arrtext);
return 0;
}
