#include <iostream>
#include <climits>
#include<cmath>
#include <float.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void play_game()
{
 int random=rand() % 251;
 cout<<random<<endl;
 cout<<"Guess a number"<<endl;
 while(true)
 {
  int guess;
  cin>>guess;
  if (guess==random)
    {
      cout<<"Nice you got the number right!"<<endl<<"Wanna play again or nah?"<<endl;
      break;
	}
  else if (guess<random)
    {
  	cout<<"Sorry your guess was lower than the expected number."<<endl<<"Please try again"<<endl;
    }
 	else 
    {
  	cout<<"Sorry your guess was higher than the expected number."<<endl<<"Please try again"<<endl;
    }
 }
	
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
