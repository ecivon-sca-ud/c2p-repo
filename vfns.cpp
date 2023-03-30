#include <iostream>
#include <string>

using namespace std;

class Customer
{
	string name,address;
	int ID;
public:
	void getUserDeets()
	{
		string na,add;
		int id;
		name=na;
		address=add;
		id=ID;
		cout<<"Enter name,using underscores to separate each portion:"<<endl;
		cin>>name;
		cout<<"Enter address:"<<endl;
		cin>>address;
		cout<<"Enter 3-digit ID:"<<endl;
		cin>>ID;
		
	}
	
	void setUserDeets()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"ID: "<<ID<<endl;
	}
	
	Customer ()
	{
		name="None";
		address= "";
		ID= 000;
		
	}
};

class Loan : public Customer
{
	double loan_balance=20000.00;
public:
	void getLoanBalance()
	{
		double lb;
		lb=loan_balance;
		setUserDeets();
		cout<<"Loan balance= sh. "<<loan_balance<<endl;	
	}
	
	void AllApplicantDeets()
	{	
		double req_loan;
		getUserDeets();
		cout<<"Apply for a loan not more than sh. "<<loan_balance<<endl;
		cin>>req_loan;
		setUserDeets();
		cout<<"Loan received by user above= sh. "<<req_loan<<endl;	
	}
	
};

int main()
{	
	Customer customer,customer1;
	customer.setUserDeets() ;		 //Output here proves constructor works just as expected. For "default" customer.
	
	customer1.getUserDeets();       //First customer is just a normal customer not seeking a loan.
	customer1.setUserDeets(); 
	cout<<endl;
	
	Loan applicant1,applicant2;
	
	applicant1.getUserDeets();    
	applicant1.getLoanBalance();
	/*Second customer, now also our first applicant, has a fixed loan balance of sh.20000 and also wishes to borrow that.*/
	
	
	applicant2.AllApplicantDeets();
	/*Third customer,  also our second applicant, can borrow, provided it isn't more than 20K.
	The function AllApplicantDeets uses the basis of inheritance to call the user fns within itself.
	This means I only need to call THIS function in int main().*/

}
