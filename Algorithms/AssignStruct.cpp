#include<iostream>

using namespace std;

struct Incomes{

int Ravi , Komal ;
};

struct Values{

Incomes Indore ;
double rent ;

};


int main() {

struct Values p;

p.Indore.Ravi= 245000;
p.rent= 23000;

cout << p.Indore.Ravi << endl;




}
