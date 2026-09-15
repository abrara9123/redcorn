#ifndef LOADSONGS_H
#define LOADSONGS_H

#include <fstream>
#include <filesystem>
#include <string>
#include <vector>
#include <iostream>

class SongLoad{
public:
    std::string getSongs(int i);
    void loadSongs();
    void printLoadedData();
    std::string changeSongs(int index);


private:
    std::vector<std::string> loadedVector;

};

#endif
