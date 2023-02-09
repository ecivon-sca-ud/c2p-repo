#include <iostream>
#include <string.h>

using namespace std;





int main()
{
  string start;
  cout<<"Type the word start to get a list of numbers 1 to 100, but with a twist:"<<endl;
  cout<<"Those divisible by 3 will be replaced by KOKO.\nThose divisible by 5 will be replaced by RIKO.Those divisible by 15 will be replaced by KOKO RIKO."<<endl;
  getline(cin,start);


   if(start=="start"|| start=="Start"||start=="START")
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
   }
   else
   {
     cout<<"Man,write start!"<<endl;

   }








}






