#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
unordered_map<string, double> population = {  {"ndia",1.21 },{"hine",9.2 } ,{"merica",2.2} } ;


unordered_map<string, double> :: iterator mi ;

mi= population.begin();


// for( unordered_map<string,double> :: iterator mi =population.begin();  mi!=population.end();mi++ ) // another way instead of this
   for(auto mi = population.begin(); mi!=population.end(); mi++) {
cout << mi->first  <<  ' ';
cout << mi->second  <<  endl;  // for maps it will print values based on alphabetic order
 }



map<string, double> population2;
population2["India"]=12.423 ;
population2["America"] =.87;
population2["Chine"] =1.47;

map<string, double> :: iterator mi2 ;

mi2= population2.begin();


for( map<string,double> :: iterator mi2 =population2.begin();  mi2!=population2.end(); mi2++ ) {
cout << mi2->first  <<  ' ';
cout << mi2->second  <<  endl;  // for maps it will print values based on alphabetic order
 }


 for(auto cNp :population){ // automatic range for loop

    cout << cNp.first << "  " << cNp.second << endl;
 }

}
