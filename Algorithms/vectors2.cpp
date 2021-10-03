#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    cin>>n;
cout <<n<<endl;
    vector<int> v1(n);

      for(size_t i=0;i<n;i++)
            cin >> v1[i];


     int j ;
     cin>>j;

     if(j<v1.size()) v1.erase(v1.begin()+j-1);

     cout << v1.size()<<endl;

    int k , l;
    cin>>k>>l;

     v1.erase(v1.begin()+k-1,v1.end()+l-1);

      cout << v1.size()<<endl;

    //for(size_t i=0; v1.size()!=i;i++)
         //   cout << v1[i]<<" ";

    return 0;
}
