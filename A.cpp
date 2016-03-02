#include <iostream>
using namespace std;
int main ()
   {
       int a;
       cout<<"Please input a number"<<endl;
       cin>>a;
       cout<<"The number you put is "<<a<<endl;
       for(;;)
       {
           if(a==1)
               break;
           else
           {
               if(a%2!=0)
               {
                        a=3*a+1;
                        cout<<a<<" ";
               }
               else
               {
                   a=a/2;
                   cout<<a<<" ";
               }
           }
         }
       return 0;
   }

