#include <iostream>
#include <string>

#define pi 3.141592654

using namespace std;

class Shape
 {
protected:
    double length;
    
public:
	void ShapeDet()
	{
		cout<<"Enter the length of shape you want to calculate."<<endl;
		cout<<"NB:Should you choose circle, take length to mean radius here."<<endl;
		cin>>length;
	}
	
 } ;


class  Circle : public Shape
{
private:
    double area,circumference;
public:
    void getCCalc()
    {
        area=pi*length*length;
        circumference=2*pi*length;
    }
    void setCCalc()
    {
        cout<<"Circle's circumference= "<<circumference<<"  cm."<<endl;
        cout<<"Circle's area= "<<area<<" squared cm."<<endl;
    }
 };


 class Square : public Shape
 {
private:
    double area;
    
public:
    void getSArea()
    {
        area=length*length;
    }
    void setSArea()
    {
        cout<<"Square's area= "<<area<<" squared cm."<<endl;
    }
    
 };


int main()
{
    string choice;
    cout<<"What kind of shape do you want to calculate area for? Enter circle or square."<<endl;
	cin>>choice;
	
	if(choice=="Circle" || choice=="circle"|| choice=="CIRCLE")
	{
		Circle circ1;
		circ1.ShapeDet();
		circ1.getCCalc();
		circ1.setCCalc();
	}
			
	else if (choice=="Square" || choice=="square"|| choice=="SQUARE")
	{
		Square sq1;
		sq1.ShapeDet();
		sq1.getSArea();
		sq1.setSArea();	
	}
		
	else
	{
		cout<<"Apologies, you may have failed to type the shape you wanted correctly."<<endl;
		cout<<"You may have also requested for a shape whose calculations we cannot yield at the moment."<<endl;
		cout<<"Please try again."<<endl;
	}
	   
}