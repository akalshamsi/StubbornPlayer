#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
int number;
int success;

  cout<<"How many times do you want to play?\n";
  cin>>number;

  for(int index=0; index<number; index++)
  {
      game.newGame();
      game.guessDoorC();
      game.guessDoorC();
  
  if(game.isWinner()==true)
  {
      success++;
  }
  }
  cout<<"You have won "<<success<<endl;
  return 0;
}
