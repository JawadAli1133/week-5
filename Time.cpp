#include<iostream>
using namespace std;
main()
{
    int hour,min;
    cout<<"Enter hours :";
    cin>>hour;
    cout<<"Enter mintes: ";
    cin>>min;
    if(hour<24 && min<60)
    {
    min = min+15;
    }
    if(min>59)
    {
       hour= hour+1;
       min = min-60; 
       
    }
     if(hour>23)
    {
      hour = 0;
    }
    
    
    
    cout<<"Time after 15 minutes is: "<<hour<<":"<<min;
      



}

  