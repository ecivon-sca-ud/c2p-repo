#include <iostream>
#include <fstream>
#include<vector>
#include<string>

using namespace std;


 
 
  

int main(int argc, char** argv) 
{   
   string filename;
   cout<<"Enter name of file:"<<"\t";
   getline(cin,filename);


   ofstream file;
   file.open(filename.c_str(),ios::app);
   
   if (file.is_open())
   {
   
   cout<<"Check file named  "<<filename<<" ."<<endl;
   file<<"C++ is tricky"<<endl;
   vector<string>names;
   names.push_back("Jimmy");
   names.push_back("Timmy");
   names.push_back("Aaron");
   names.push_back("Norah");
   names.push_back("Mosoti");
  
  for(string name:names)
   {
  	 file<<name<<endl;
   }
  }
  else
  {
  cout<<"Apologies,unable to open file"<<endl;	
  }
  
  
  
  ifstream file ("Warrup.txt");
  vector<string>names;
  string input;
    
  while(file>>input)  //returns the file,hopefully!
  {
  	names.push_back(input);
  }
  
  for(string name:names)
  {
  	cout<<name<<endl;
  }
  
  
}
