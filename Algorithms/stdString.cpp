#include<iostream>
#include<string>

using namespace std;

int main() {

string v= "ajaysingh";
string w(v);  // new copy to w;
string k=v;

string z = v+w ; // concatenation

v[2]=v[4] ;  // indexing allowed to change values


cout << v << "\n"<< v.substr(2) << "\n" << v.substr(3,7) << endl;


int i = v.find("crowd"); // find aj in the string
int j = z.find("sin",1);  // find sin after position 1;

cout << i << "  " << j<< endl;


 }
