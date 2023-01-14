#include<iostream>
using namespace std;
float taxCalculator(char type,float price);

main()
{
    float price;
    char type;
    cout<<"Eneter price of your Vehicle: ";
    cin>>price;
    cout<<"Enter the type of Vehicle: ";
    cin>>type;
    
    float result =  taxCalculator(type,price);
    cout<<"The final price of the vehicle is: $"<<result;
}

  float taxCalculator(char type ,float price)
  {
     float finalPrice;
     if(type=='M')
     {
        finalPrice = (price*0.06)+price;
     }

     else if(type=='E')
     {
        finalPrice =(price*0.08)+price;
        
     }

     else if(type=='S')
     {
        finalPrice =(price*0.1)+price;
        
     }

     else if(type=='V')
     {
        finalPrice = (price*0.12)+price;
        
     }

     else if(type=='T')
     {
        finalPrice = (price*0.15)+price;   
     }
     
      return finalPrice;
  }