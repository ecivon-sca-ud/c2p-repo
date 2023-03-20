#include <iostream>
#include <string>

using namespace std;
class Supermarket
{
    string product;
    double cost;
    public:
    void setData(string p,double co )
	{
        product=p;
        cost=co;
    }
   
    double getCost()
	{
        return cost;
    }
    void showProd()
	{
        cout<<"\t\t\t\t"<<product<<"\t\t\t"<<cost<<endl;
    }
};
int main()
{
   int num;
   double sum=0;
   string cashier_name;
   cout<<"Before we begin, let us get the cashier's name."<<endl;
   getline(cin,cashier_name);
   
   cout<<"To the customer...\nHow many things do you wish to buy?"<<endl;
   cin>>num;
   Supermarket s[num];

   for(int i=0;i<num;i++)
   {
    string produit;
  	double price;
	cout<<"Enter name of product# "<<i+1<<endl;
	cin>>produit;
	cout<<"How much is said product?"<<endl;
	cin>>price;
	s[i].setData(produit,price);
   }
   
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
	cout<<"\t\t\t\t\t"<<"NAIVAS SUPERMARKET"<<endl;
	cout<<"\t\t\t\t"<<"_________________________________"<<endl;
	cout<<"\t\t\t\t"<<"*********************************"<<endl;
    cout<<"\t\t\t\t"<<"Number of Products"<<"\t"<<num<<endl;
    cout<<"\t\t\t\t"<<"Product Name"<<"\t\t"<<"Price(Ksh)"<<endl;
   for (int j=0;j<num;j++)
   {
    s[j].showProd();
    sum=sum+s[j].getCost();

   }
    cout<<endl;
    cout<<"\t\t\t\t"<<"Total"<<"\t\t\t"<<sum<<endl;
    cout<<"\t\t\t\t"<<"Served by "<<cashier_name<<endl;
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
    cout<<"\t\t\t\t"<<"*********************************"<<endl;
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
return 0;
}