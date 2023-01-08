#include<iostream>
using namespace std;
float taxCalculator(char type,int price);

main()
{
    int price;
    char type;
    cout<<"Eneter price of your Vehicle: ";
    cin>>price;
    cout<<"Enter the type of Vehicle: ";
    cin>>type;
    
    int finalPrice =  taxCalculator(type,price);
    cout<<"The final price on a vehicle of type "<<type<<" after tax is $"<<finalPrice;
}

  void taxCalculator(char type ,int price)
  {
     int taxAmount;
     int finalPrice;
     if(type=='M')
     {
        taxAmount = price*(6/100);
        finalPrice = taxAmount+price;
        return finalPrice;
     }

     if(type=='E')
     {
        taxAmount = price*(8/100);
        finalPrice = taxAmount+price;
        return finalPrice;
        
     }

     if(type=='S')
     {
        taxAmount = price*(10/100);
        finalPrice = taxAmount+price;
        return finalPrice;
        
     }

     if(type=='V')
     {
        taxAmount = price*(12/100);
        finalPrice = taxAmount+price;
        return finalPrice;
        
     }

     if(type=='T')
     {
        taxAmount = price*(15/100);
        finalPrice = taxAmount+price;
        return finalPrice;
        
     }
     
      return 0;
  }