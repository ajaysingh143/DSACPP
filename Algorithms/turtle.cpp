#include<iostream>

using namespace std;

 main_program(){

    char input ;

repeat(100){
    cin>>input ;

    if(input=='f')forward(100);
    else if(input=='r') right(90);
    else if(input=='l') left(90);
    else cout<< " Not a proper input, " >> input >>endl;
}

}
