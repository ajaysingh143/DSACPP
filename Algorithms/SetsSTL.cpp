#include<iostream>
#include<set>

using namespace std;

int main (){
int n=11;

set<int> student_roll;
set<string> student_name;

for(int i=0; i<n; i++){
    int roll;
    cin>>roll;
    if(roll<0) break;
    student_roll.insert(roll);


}
int s;
cin>>s;
cout << student_roll.count(s) <<endl;

for(auto r : student_roll)
    cout << r <<endl;


    // there is also a nice feature call pair

    pair<int , string> p1,p2 ;
    p1 = pair<int,string>(50 , "Fifty");
    p2.first =60;
    p2.second = "Sixty";

   // cout << p1 <<endl;
   // cout << p2 <<endl;

    cout << (p1<p2) << endl;  // comparison happend in lexicographic order

}
