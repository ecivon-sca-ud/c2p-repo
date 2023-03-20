#include <iostream>
using namespace std;
class Student
{
    string name;
    int age;
    public:
      setData(string n, int a)
	{
        name=n;
        age=a;
    }
    void display()
	{
        cout<<"Name:"<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void displayName()
	{
        cout<<"Name:"<<name<<endl;
    }
    int getAge()
	{
        return age;
    }
    void getRow()
	{
        cout<<name<<"\t"<<age<<endl;
    }
};
int main()
{
   int num;
   int sum=0;
   cout<<"Enter the number of students"<<endl;
   cin>>num;
  Student s[num];

  for(int i=0;i<num;i++){
    string name;
  int age;
  cout<<"Enter name"<<endl;
  cin>>name;
  cout<<"Enter age"<<endl;
  cin>>age;
    s[i].setData(name, age);
    }
    cout<<"NAIVAS"<<endl;
    cout<<"Number of Products"<<num<<endl;
   for (int j=0;j<num;j++){
    s[j].getRow();
    sum=sum+s[j].getAge();

   }
    cout<<"Total"<<"\t"<<sum<<endl;
    cout<<"Served by Jack"<<endl;
    cout<<"******"<<endl;
return 0;
}