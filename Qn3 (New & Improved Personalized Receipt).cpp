#include <iostream>
#include <string>

using namespace std;
class Supermarket
{
    string product;
    double cost;
    public:
    void setData(string p,double co ) 
	//First fn makes product and cost, otherwise private, accessible to other member fns.
	{
        product=p;
        cost=co;
    }
   
    double getCost() 
	//2nd fn returns cost and will be used in conjunction with the array of objects in int main() and a for loop, which will keep returning the sum of sum and cost of specific element in object array 
	{
        return cost;
    }
    void showProd()
    //3rd fn displays each product in obj. array and its respective cost.
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
   /*First for loop is repeated for as often as the number of products the customer claimed to buy.
   It then passes the product name and cost for each element of the s array to the setData fn. */
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
   
   	double c_payment;
    cout<<"How much has the customer paid?"<<endl;
    cin>>c_payment;
    //The last three lines above will be later used to determine the change due to the customer at the end of the receipt.
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
	cout<<"\t\t\t\t\t"<<"NAIVAS SUPERMARKET"<<endl;
	cout<<"\t\t\t\t"<<"_________________________________"<<endl;
	cout<<"\t\t\t\t"<<"*********************************"<<endl;
    cout<<"\t\t\t\t"<<"Number of Products"<<"\t"<<num<<endl;
    cout<<"\t\t\t\t"<<"Product Name"<<"\t\t"<<"Price(Ksh)"<<endl;
    /*2nd for loop simply lists out the products, immediately after the "header" of this receipt.
	 As noted before, it will also be used in conjunction with the getCost fn to repeatedly add sum to the cost value of a specific element
	 in the s array.*/
   for (int j=0;j<num;j++)
   {
    s[j].showProd();
    sum=sum+s[j].getCost();

   }
   /*The last part of this receipt gives a simplified take on VAT, 
   along with the actual total, amount paid by the customer in cash and the resultant change.
   Also appreciates the cashier, whose name was keyed in earlier.*/
    cout<<endl;
    cout<<"\t\t\t\t"<<"VAT (16% of total)"<<"\t"<<0.16*sum<<endl;
    cout<<"\t\t\t\t"<<"Total (minus VAT)"<<"\t"<<0.84*sum<<endl;
    cout<<endl;
    cout<<"\t\t\t\t"<<"Total"<<"\t\t\t"<<sum<<endl;
    cout<<"\t\t\t\t"<<"Cash Paid"<<"\t\t"<<c_payment<<endl;
    cout<<"\t\t\t\t"<<"Change"<<"\t\t\t"<<c_payment-sum<<endl;
    cout<<endl;
    cout<<"\t\t\t\t"<<"Served by "<<cashier_name<<endl;
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
    cout<<"\t\t\t\t"<<"*********************************"<<endl;
    cout<<"\t\t\t\t"<<"_________________________________"<<endl;
}