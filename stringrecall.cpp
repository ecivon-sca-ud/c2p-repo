#include <iostream>
#include <climits>
#include<cmath>
#include <float.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha; 
using std::string;

int main(int argc, char** argv) 
{
 string greeting="Hello!";
 greeting.append("Hello!Hello!Hellooo!!");  
 //M1.Here's another way to do string appending.
 greeting.insert(5,"oooo...");            
 //M2.This features string insertion.
 greeting.erase(5,7);                    
 //M3.This erases the characters in the string pretty much the same way the "Delete" key on MS Word would.
 //greeting.pop_back();                   
 //M4.The pop_back modifier removes the last character on a string, so that if I were to run this now, there'd be no last exclamation mark.
 greeting.replace(0,1,"Hello!H");       
 //M5.For the replace modifier, the first argument is your starting index.The second argument shows how many characters you want to delete on the right, starting from the second index. The last argument is basically the string you want to replace it with.
 cout<<greeting<<endl;
 cout<<greeting.length()<<endl;        
 //Checks for number of characters in resultant string.
 cout<<greeting.size()<<endl;         
 // Same deal as previous line of code.

 cout<<"Seeing the deranged greeting above, Stewie exclaimed:"<<endl;
 string Stewie="What the deuce?";
 Stewie.replace(Stewie.find("deuce"),5,"*****");  
 //Op1.The find operator in outer parentheses is used to look for some part of the string with the string quoted in inner parentheses.
 cout<<Stewie<<endl;
 cout<<Stewie.substr(9,5)<<endl;                 
 //Op2. substr is used to print only a specified part of a string. The 1st argument is the index you'd like to start from and the 2nd is how many characters going to the right you want printed on the console.
 cout<<Stewie.find_first_of("acdehtuW")<<endl;  
 //Op3. similar to find, except it only gives you the index of the first instance of any character in the string, rather than the first instance of each character.
 cout<<Stewie.compare(greeting)<<endl;         
 //Op4. Used to check length of two strings. If equal, 0 is printed, if not 1. Using == is better though, although this would show up in if statements.
Apparently, though, string.compare is outright preferred in Java to ==, since with ==, Java would  check whether the ENTITIES (content of the strings being checked) are the same, rather than whether their LENGTHS are the same.

}
