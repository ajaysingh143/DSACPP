#include<iostream>
#include<vector>

using namespace std;


int main(){

vector<int> v1 ;    // empty vector which has int value

vector<string> v2(10);   // 10 element vector of strings
vector<short> v3(5,0);   // short for have 5 element and has value zero for each element
vector<short> w=v3;


v3[3]=27;

v3.push_back(22);

cout << v3.size() <<endl;

// another initialization

vector<double> c1(10);

for(size_t i=0; i<c1.size();i++)
    cout << c1[i]<<endl;


// multidimensional vectors

vector<vector<int> > k1;

vector<vector<int> > k( 5 , vector<int>(10 , 21)  ) ; // vectors contain 5 element as column and each contains 10 vector element ;

cout << k.size();
cout << k[0].size() << endl;


// creating 5*5 identity metrix

vector<vector<double> > m ( 5 , vector<double>(5 , 0) ) ;

for(size_t i=0 ; i<m.size();i++)
    m[i][i]=1;

for(size_t i=0 ; i<m.size();i++) {
        cout << "\n" ;
    for(size_t j=0 ; j<m[0].size();j++)
             cout <<  m[i][j]<<' ';
           }

}
