#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#define pi 3.14195

void CircArea (double radius)
{
	cout<<"The circle's area is "<<pi*radius*radius<<" squared cm.";
}

void CircArea (double x1,double y1,double x2,double y2)
{	double radrad= pow((x2-x1),2)+pow((y2-y1),2);
	cout<<"The circle's radius is "<<sqrt(radrad)<<"  cm."<<endl;
	cout<<"The circle's area is "<<pi*sqrt(radrad)*sqrt(radrad)<<" squared cm.";
}


int main()
{ string choix;
  cout<<"Yo you're in a circle's area calculator.\n";
  cout<<"Enter \"Coordinates\" if you wanna calculate a graphically drawn circle.\n";
  cout<< " Else enter \"Radius\" if you're entering the radius more directly."<<endl;
  getline(cin,choix);
  if(choix=="coordinates"||choix=="Coordinates")
  {
  	double x1,x2,y1,y2;
  	cout<<"Enter x-coordinate of centre."<<endl;
  	cin>>x1;
  	cout<<"Enter y-coordinate of centre."<<endl;
  	cin>>y1;
  	cout<<"Enter x-coordinate of any point on the circle."<<endl;
  	cin>>x2;
  	cout<<"And finally, enter y-coordinate of the random point you just chose."<<endl;
  	cin>>y2;
  	CircArea(x1,y1,x2,y2);
  }
  else if (choix=="Radius"||choix=="radius")
  {
  	double radius;
  cout<<"Enter radius of circle in cm to get area."<<endl;
  cin>>radius;
  CircArea(radius);	
  }
  else
  {
  	cout<<"Unaandika nini wewe?\nStart over!"<<endl;
  }
  
   
}






