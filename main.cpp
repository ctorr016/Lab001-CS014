#include <iostream>
#include "Playlist.h"

using namespace std;

void PrintMenu(string Title)
{
  cout << Title << " PLAYLIST MENU" << endl;
  cout << "a - Add song" << endl;
  cout << "d - Remove song" << endl;
  cout << "c - Change position of song" << endl;
  cout << "s - Output songs by specific artist" << endl;
  cout << "t - Output total time of playlist (in seconds)" << endl;
  cout << "o - Output full playlist" << endl;
  cout << "q - Quit" << endl;
  cout << endl << "Choose an option:" << endl;
}

void addSong()
{
  
}

void removeSong()
{
  
}

void changePosition()
{
  
}

void specificArtist()
{
  
}

void totalTime()
{
  
}
void printPlaylist()
{
      
}

int main()
{
  string TitleName;
  char menuOption;
  bool quitMenu = false;
  bool validChar = false;
  cout << "Enter playlist's title:" << endl;
  cin >> TitleName;
  do
  {
    validChar = false;
    void PrintMenu(TitleName);
    cin << menuOption;
    if (menuOption == 'a')
    {
      void addSong();
      validChar = true;
    }
    if (menuOption == 'd')
    {
      void removeSong();
      validChar = true;
    }
    if (menuOption == 'c')
    {
      void changePosition();
      validChar = true;
    }
    if (menuOption == 's' )
    {
      void specificArtist();
      validChar = true;
    }
    if (menuOption == 't')
    {
      void totalTime();
      validChar = true;
    }
    if (menuOption == 'o')
    {
      void printPlaylist();
      validChar = true;
    }
    if (menuOption == 'q')
    {
      quitMenu = true;
      validChar = true;
    }
    if (!validChar)
    {
      cout<< "invalid response, please enter a valid response" << endl;
    }
   while (!quitMenu)
     
  return 0;
}
