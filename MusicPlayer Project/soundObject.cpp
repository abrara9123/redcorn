#include "soundObject.hpp"
#include "loadSongs.hpp"
#include "soundEngine.hpp"

soundObject::soundObject(int songNumber){
    SongLoad songLoader;
    songLoader.loadSongs();
    songLoader.printLoadedData();
    SoundEngine V1(songLoader.getSongs(songNumber));
     V1.startEngine();
    V1.isPlayingSound();
}

soundObject::~soundObject(){
//delete this;
std::cout << "Deleting the output" << std::endl;
}