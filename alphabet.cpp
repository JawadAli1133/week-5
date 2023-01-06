#include<iostream>
using namespace std;
main()
{
   char ch;
   while(true)
   {
   cout<<"Enter an alphabet: ";
   cin>>ch;
   if(ch>='a' && ch<='z')
   {
      cout<<"You have entered small"<<ch<<endl<<endl;
   }
   if(ch>='A' && ch<='Z')
   {
      cout<<"You have entered large "<<ch<<endl<<endl;
   }
   }

}

     