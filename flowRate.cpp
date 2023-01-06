#include<iostream>
using namespace std;
main()
{
   float volume,flow1,flow2;
   float waste;
   float volume1;
   float hour;
   float percV,percPipe1,percPipe2;
   cout<<"Enter the volume of pool: ";
   cin>>volume;
   cout<<"Enter flow rate of first pipe: ";
   cin>>flow1;
   cout<<"Enter flow rate of second pipe: ";
   cin>>flow2;
   cout<<"Enter hours for which the worker was absent: ";
   cin>>hour;
   float pipe1,pipe2;
   pipe1= flow1*hour;
   pipe2= flow2*hour;
   volume1 = pipe1+pipe2;
   percV = (volume1/volume)*100;
   percPipe1 = (pipe1/volume1)*100;
   percPipe2 = (pipe2/volume1)*100;
   if(volume1<volume)
   {
       cout<<"The pool is "<<percV<<" % full"<<endl;
       cout<<"Pipe 1:"<<percPipe1<<"%,"<<"Pipe 2:"<<percPipe2<<"%"<<endl;
   }
      if(volume1>volume)
      {
      
      waste = volume1-volume;
      cout<<"For "<<hour<<" hours " <<waste<<" litres water was wasted "<<endl;
      }
   

   


}