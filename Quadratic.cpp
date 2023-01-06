#include<iostream>
#include<cmath>
using namespace std;
float quadX1(float a,float b,float c);
float quadX2(float a,float b,float c);
main()
{
   float a,b,c;
   float result;
   float result1;
   cout<<"Enter number: ";
   cin>>a;
   cout<<"Enter number: ";
   cin>>b;
   cout<<"Enter number: ";
   cin>>c;
   result = quadX1(a,b,c);
   
   cout<<"x="<<result<<endl;
   
   result1 = quadX2(a,b,c);
   cout<<"Or x= "<<result1<<endl;
    
      
      


}
   
    float quadX1(float a,float b,float c)
    {
        float discr,sqRoot,res1;
        float result;
        discr =(b*b)-(4*a*c);
        sqRoot = sqrt(discr);
        res1 = -1*(b) + sqRoot;
        result = res1/2*a;
        return result;
    }
    float quadX2(float a,float b,float c)
    {
        float discr,sqRoot,res1;
        float result1;
        discr =(b*b)-(4*a*c);
        sqRoot = sqrt(discr);
        res1 = -1*(b) - sqRoot;
        result1 = res1/2*a;
        return result1;
    }
