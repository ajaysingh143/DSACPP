#include<iostream>

using namespace std ;

struct Point{ double x , y ; };
Point midpoint(Point a , Point b){
Point mp ;

mp.x = (a.x + b.x)/2;
mp.y = (a.y + b.y)/2 ;

return mp;

}


int main(){
Point p={10,8}, q ={7,4};

Point r = midpoint(p,q);


cout << r.x <<endl;
cout<< midpoint(p,r).y << endl;
}
