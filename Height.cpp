#include<iostream>
#include<cmath>
using namespace std;
main()
{
   float base,height;
   float angle;
   angle = 30/57.298;
   base = 43;
   height = base*(tan(angle));
   cout<<"Height is: "<<height;
}