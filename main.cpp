#include <iostream>
#include <climits>
#include<cmath>
#include <float.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>


using namespace std;

void print_vector(vector<int>vector)
{
  for (int k=0;k<vector.size();k++)
  {
  	cout<<vector[k]<<"\t";
  }
  cout<<endl;
}


void play_game()
{
 vector <int> guesses;
 int count=0;
 
 
 int random=rand() % 251;
 cout<<random<<endl;
 cout<<"Guess a number"<<endl;
 while(true)
 {
  int guess;
  cin>>guess;
  count++;     //Used to keep track of number of guesses from each round. Best used with a file that stores this, as will soon be seen.
  
  guesses.push_back(guess);
  
  if (guess==random)
    { 
      cout<<endl<<endl;
      cout<<"Nice you got the number right!"<<endl<<"Wanna play again or nah?"<<endl;
      break;
	}
  else if (guess<random)
    {
  	  cout<<"Sorry your guess was lower than the expected number."<<endl<<"Please try again."<<endl;
    }
  else 
    {
  	  cout<<"Sorry your guess was higher than the expected number."<<endl<<"Please try again."<<endl;
    }
 }
   std::fstream input("Best Scores.txt");
   
   int best_score;
   input>>best_score;
   
   std::fstream output("Best Scores.txt");
   if(!output.is_open())
   {
   	cout<<"Unable to read from file"<<endl;
   }
   
   if(count<best_score)
   {
   	output<<endl;
   	output<<count<<endl;
   }
   else
   {
   	output<<endl;
   	output<<best_score<<endl;
   }
 
 
 

	
	  	
  print_vector(guesses);	
}
 
 
  

int main(int argc, char** argv) 
{   

	
	
  srand(time(NULL));
  int choix;
  do
	{
  cout<<"0.Quit"<<endl<<"1.Play Game"<<endl;
  cin>>choix;
  switch(choix)
		{
 		 case 0:
  		cout<<"So sad to see you end the game.\nAnyway, see you next time and thanks for playing."<<endl;
  		break;
  		case 1:
  		play_game();
  		break;
  		default:
  		cout<<"Man, you had one job smh.\nPlease pick 1 or 0 this time, okay?"<<endl;	
  		break;
		} 

	}while(choix!=0); 
	
	
	
}

