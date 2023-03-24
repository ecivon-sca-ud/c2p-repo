#include <iostream>
#include <string>

#define pi 3.141592654

using namespace std;

class Shape
{
protected:
    double area;
};

 class  Circle : protected Shape
 {
 private:
    double radius,circumference;
    
public:
    void getCCalc()
    {
        cout<<"Enter radius in cm."<<endl;
        cin>>radius;
        area=pi*radius*radius;
        circumference=2*pi*radius;
    }
    
    void setCCalc()
    {
        cout<<"Circle's circumference= "<<circumference<<"  cm."<<endl;
        cout<<"Circle's area= "<<area<<" squared cm."<<endl;
    }

 };


 class Square : protected Shape
 {
private:
    double s_side;
public:
    void getSArea()
    {
		cout<<"Enter square's length in cm"<<endl;
        cin>>s_side;
        area=s_side*s_side;
    }
    
     void setSArea()
    {
        cout<<"Square's area= "<<area<<" squared cm."<<endl;
    }
    
 };


int main()
{
    Circle circ1;
    circ1.getCCalc();
    circ1.setCCalc();
    
    Square sq1;
    sq1.getSArea();
    sq1.setSArea();
}