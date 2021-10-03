#include<iostream>
#include<math.h>
using namespace std;


void Pointer_Conversion( double x , double y , double *pr , double *pthetha ) {


*pr = sqrt(x*x + y*y );
*pthetha = atan2(y,x);

return ;

}


int main()
{
    double x=2 , y=2 , pr , pthetha ;

    Pointer_Conversion(x ,y ,&pr , &pthetha );

    cout << pr << "  " <<pthetha << endl ;

return 0;

}
