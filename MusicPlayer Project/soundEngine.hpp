#ifndef SOUNDENGINE_H
#define SOUNDENGINE_H
#include "loadSongs.hpp"
#include <string>
#include <SFML/Audio.hpp>
#include <string>
#include <iostream>

class SoundEngine{

public:
   SoundEngine(std::string SongStr);
   void startEngine();
   void isPlayingSound();
   auto retSound(){
       sf::Sound temp(buffer);
       return temp;
   }




private:
    sf::SoundBuffer buffer;
    sf::Sound sound;

};














#endif
