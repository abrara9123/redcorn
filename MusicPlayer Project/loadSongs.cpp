#include "loadSongs.hpp"
#include <iostream>

std::string SongLoad::changeSongs(int index){


    return "";
}

std::string SongLoad::getSongs(int i){
    return loadedVector[i];
}

void SongLoad::loadSongs(){
    std::cout << "Choose a directory to start the application: " << std::endl;
    std::string targetDirec = "/home/abrar/Music";
    for(auto& entry: std::filesystem::directory_iterator(targetDirec)){
        loadedVector.push_back(entry.path());
    }
}

void SongLoad::printLoadedData(){
    for(auto& a: loadedVector){
        std::cout << a << std::endl;
    }
}
