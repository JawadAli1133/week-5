#include<iostream>
using namespace std;
main()
{
   int num,rev=0,rem,orig;
   cout<<"Enter the number: ";
   cin>>num;
   orig = num;
   
   while(num>0)
    {
      rem = num%10;
      rev = (rev*10)+rem;
      num = num/10;
    }
    cout<<rev<<endl;
   if(orig==rev)
   {
     cout<<"The number is symmetrical "<<endl;
   }
   if(orig!=rev)
   {
     cout<<"The number is not symmetrical "<<endl;
   }
   
   


}
