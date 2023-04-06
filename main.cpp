#include <iostream>
#include <string>

using namespace std;

int main()
{
   double x,y;
   cout<<"Enter 1st number:"<<endl;
   cin>>x;
    cout<<"Enter 2nd number:"<<endl;
   cin>>y;
 double z =x/y;
   try
   {
       if(y==0.0)
       {
           throw y;
       }
       else
       {
           cout<<"Quotient="<<z;
       }
   }

   catch(double y)
   {
       cout<<"Can't divide by zero!"<<endl;
   }

}

