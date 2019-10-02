#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist
{
    public:
      Playlist(string PlaylistTitle, PlaylistNode* nextNode = nullptr);
      void InsertAfter(PlaylistNode* nodePtr);
      void SetNext();
      string GetID(string ID);
      string GetSongName(string SongName);
      string GetArtistName(string ArtistName);
      int GetSongLength(int SongLength);
      PlaylistNode* GetNext();
      void PrintPlaylistNode();
    private:
      string uniqueID = "none";
      string songName = "none";
      string artistName = "none";
      int songLength = 0;
      PlaylistNode* nextNodePtr = 0;
}
  
#endif
