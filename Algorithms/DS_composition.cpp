#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main(){

map<string , vector<string> > friends ;

friends["Amit"].push_back("vinod");
friends["Amit"].push_back("vivek");
friends["Amit"].push_back("vijay");
friends["Amit"].push_back("vaibhav");

friends["Ankit"].push_back("ajay");
friends["Ankit"].push_back("aakash");
friends["Ankit"].push_back("aashish");
friends["Ankit"].push_back("aanand");
friends["Ankit"].push_back("avinash");

cout << friends["Ankit"][3] << endl;
cout << friends["Amit"][2] <<endl;

// now if we want to find out if someone is friend of someone
map<string , set<string> > frd ;

frd["Ankur"].insert("Ajay");
frd["Ankur"].insert("Vijay");
frd["Ankur"].insert("Sanjay");

cout << frd["Ankur"].count("Vjay") <<endl;

// what if we want to store more pointing data for each variable there is one more
// here we have more cool thing

map<string ,map<string , int> > names;

names["Ajay"]["Vikas"]=10;
names["Ajay"]["Vijay"]=21;

// we will discuss more in DSAS

// typedef can make type more accureat

typedef map<string ,map<string , int> > names;
names friends ;

}


