#include <iostream>
#include <string.h>

using namespace std;





int main()
{ 
  int start;
  do
  {
  cout<<"Type 0 to get a list of numbers 1 to 100, but with a twist:"<<endl;
  cout<<"Those divisible by 3 will be replaced by KOKO.\nThose divisible by 5 will be replaced by RIKO.Those divisible by 15 will be replaced by KOKO RIKO."<<endl;
  cin>>start;


   if(start==0)
   {
      cout<<"Nice! Check below"<<endl;
      for (int i=1;i<101;i++)
      {
         if(i%15==0)
         {
           cout<<"KOKO RIKO"<<endl;
         }
          else if(i%5==0)
         {
           cout<<"RIKO"<<endl;
         }
          else if(i%3==0)
         {
           cout<<"KOKO"<<endl;
         }
        
           else
       {
            cout<<i<<endl;
       } 

      }
      break;
   }
   else
   {
    cout<<"Man,type zero!\nTry again..."<<endl;
   		
	}
     

   } while(start=!0);








}
