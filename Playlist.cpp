#include <iostream>
using namespace std;

#include "Playlist.h"

Playlist::Playlist(string PlaylistTitle, PlaylistNode* nextNode)
{
  
}

void Playlist::InsertAfter(PlaylistNode* nodePtr)
{
  
}

void Playlist::SetNext()
{
  
}

string Playlist::GetID()
{
    return uniqueID;
}

string Playlist::GetSongName()
{
    return songName;
}

string Playlist::GetArtistName()
{
    return artistName;
}

int Playlist::GetSongLength()
{
    return songLength;
}

PlaylistNode* Playlist::GetNext()
{
    return nextNodePtr;
}

void Playlist::PrintPlaylistNode()
{
    cout << "Unique ID: " << uniqueID << endl;
    cout << "Song Name: " << songName << endl;
    cout << "Artist Name: " << artistName << endl;
    cout << "Song Length (in seconds): " << songLength << endl;
}

