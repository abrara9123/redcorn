#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <SFML/Audio.hpp>
#include "soundObject.hpp"
#include "loadSongs.hpp"
#include "soundEngine.hpp"

//Some features to add: Looping, volume inc and dec, metadata being filled out, vectorsor arraus of songs so a queue can be made, 3d audio being made soon,x

//Main things tha tneed to be done, this is the UI, the metadata, the quality of the files and information being told to us. Refactor this code so that the things live in their own files to make it easier to add or update any files.

//Tools for metadata = will use taglib to get the metadata, QT for the UI most likely, SFML to control the audio being played, Goal is to ship an Exe and an mobile app soon.


int main(){
    
    // SongLoad songLoader;
    // songLoader.loadSongs();
    // songLoader.printLoadedData();
    // SoundEngine V1(songLoader.getSongs(0));
    // V1.startEngine();
    // V1.isPlayingSound();
    
    std::string switchCase;
    std::cin >> switchCase;
    //Make this not case senstiive
    while(switchCase == "yes"){
        int checl = -1;
        std::cin >> checl;
        switch(checl){
            case 0:
            {
            soundObject v1{0};
            std::cout << "Enter a new case to change the song if you want" << std::endl;
            std::cin >> checl;
            }
            case 1:
            {soundObject v2{3};
            }

            default:
                break;
        }
    }



}
