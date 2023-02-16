#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>


using namespace std;





int main()
{
    /*
    vector<int>position={6,7,8,9,10};
    for(int ind: position)
    {
        cout<<ind<<endl;
    }
    */


    /*
    bool ismale=true;
    if(ismale)
    {
        cout<<boolalpha<<ismale<<endl;
    }
    else
    {
        cout<<boolalpha<<!ismale<<endl;
    }
    */


      /*
      enum month{Jan,Feb=4,Mar,Apr,May=8,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
     cout<<(month) <<endl;
     */


     int a=5;
     int *p;
     p=&a;
     cout<<a<<endl<<p<<endl;
    cout<<*p * *p<<endl;
    *p=21;
    cout<<*p<<endl;
    cout<<pow(*p,3)<<endl;
    int y=10;
    int *p2=&y;
    cout<<pow(*p2,2)<<endl<<pow(*p2+1,3)<<endl;



}






