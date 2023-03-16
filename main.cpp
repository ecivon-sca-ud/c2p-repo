#include <iostream>
#include<math.h>
#include <string>
#include <vector>


using namespace std;

class Student
{
private:
    string name;
    int age;
public:
    Student()
    {

    }
   void setData(string n,int a)
    {
        name=n;
        age=a;
    }
    void Display()
    {
        cout<<"Name: " <<name<<endl;
        cout<<"Age:    "<<age<<endl;
    }
    /*void DisplayName()
    {
        cout<<"Name: " <<name<<endl;
    }*/

    int getAge()
    {
        return age;
    }




};


int main()
{
    int num;
    int sum=0;
    string name;
    int age;
    cout<<"How many students are we working with?"<<endl;
    cin>>num;
    Student student[num];

    for (int i=1;i<=num;i++)
    {
        cout<<"Name?"<<endl;
        cin>>name;
        cout<<"Age?"<<endl;
        cin>>age;
        sum=sum+age;
        student[i].setData(name,age);
    }

    for (int j=1;j<=num;j++)
    {
        student[j].Display();
    }
    //cout<<sum<<endl;

   for (int k=1;k<=num;k++)
   {
       sum=sum+age;
   }
    cout<<"Average age= "<<(double)sum/num<<endl;








}







