#include<iostream>
using namespace std;
int add(int num);
main()
{
   int num,sum=0;
   
   cout<<"Enter a number: ";
   cin>>num;
   sum = add(num);
   if(sum%2==0)
   {
     cout<<"Number is evenish ";
   }
   if(sum%2!=0)
   {
     cout<<"Number is oddish ";
   }


}

  int add(int num)
  {
     int mod,sum=0;
     while(num>0)
     {
       mod = num%10;
       sum =sum+mod;
       num = num/10;
       
     }
        return sum;
   }