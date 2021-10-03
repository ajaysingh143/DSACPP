//map are very usefull and when can using any indices like contry names and string
// to use map and unordered map we have to add <map>
#include<map>
#include<iostream>

using namespace std;

// unordered map are much faster but they have less features
int main(){

// general form'
// map <indextype , valuetype> variable;

map <string , double > population;

//crating maps entries   data is in billion
population["India"]=1.23;
population["America"] =.87;
population["Chine"] =1.47;

cout << population["India"]<<endl;


population["America"] = .273;  //we can easily update the values

cout << population["America"]<<endl;


string country ;

    cin >> country;
    if(population.count(country)>0)
        cout << population[country] << " is know population " << endl;
    else cout <<  " the population is not known " <<endl ;


}
