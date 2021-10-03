#include<iostream>

using namespace std;
void converter (int inch , double &feet , double &yard , double &meter){

feet = inch/12 ;

yard= feet/3;
meter = yard / 2 ;

return ;

}

int main(){

int inch = 17 ;
double feet , yard , meter ;

converter(inch , feet , yard , meter) ;

cout << inch << " inch is equal to  " << feet << "  feet  " << yard << "  yard " << meter << "  meter  " << endl;
return 0;

}
