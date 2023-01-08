#include<iostream>
using namespace std;
void meter(float length,float width,float height);
void centiMeter(float length,float width,float height);
void miliMeter(float length,float width,float height);
void kiloMeter(float length,float width,float height);
main()
{
   float length,width,height;
   string unit;
   cout<<"Enter length of pyramid: ";
   cin>>length;
   cout<<"Enter width of pyramid: ";
   cin>>width;
   cout<<"Enter height of pyramid: ";
   cin>>height;
   cout<<"Enter unit of volume: ";
   cin>>unit;
   if(unit=="meter")
   {
       meter(length,width,height);
       
   }

   if(unit=="centimeter")
   {
       centiMeter(length,width,height);
       
   }

   if(unit=="milliMeter")
   {
       miliMeter(length,width,height);
       
   }

   if(unit=="kilometer")
   {
       kiloMeter(length,width,height);
       
   }


}

     void meter(float length,float width,float height)
     {
        int result;
        result = (length*width*height);
        cout<<"Volume of pyramid is: "<<result<<" cubic meter "<<endl;
     }

     void centiMeter(float length,float width,float height)
     {
        int result;
        result = (length*width*height*(1000000));
        cout<<"Volume of pyramid is: "<<result<<" cubic centimeter "<<endl;
     }

     void miliMeter(float length,float width,float height)
     {
        int result;
        result = (length*width*height*(1000000000));
        cout<<"Volume of pyramid is: "<<result<<" cubic millimeter "<<endl;
     }

     void kiloMeter(float length,float width,float height)
     {
        int result;
        result = ((length*width*height)/(1000000000));
        cout<<"Volume of pyramid is: "<<result<<" cubic kilometer "<<endl;
     }