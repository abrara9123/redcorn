#include "soundEngine.hpp"
#include "loadSongs.hpp"

SoundEngine::SoundEngine(std::string SongStr){

    if(!buffer.loadFromFile(SongStr)){
        std::cout << "No File has been Loaded" << std::endl;
    }
    std::cout << "THE BUFFER RATE OF THE AUDIO FILE IS " << std::endl;
    std::cout << buffer.getSampleRate() << std::endl;

}


void SoundEngine::startEngine(){
     sound = retSound();
    sound.play();
}



void SoundEngine::isPlayingSound(){
    int hold;
    while(sound.getStatus() == sf::Sound::Playing){
        std::cout << "1 to Quit:, 2 to Pause:, 3 to resume, 4 to skip song forward 5 secs, 5 to go back 5 secs, 6 to chnage -50 to the volume, 7 to go to next song in the track" << std::endl;
        std::cout << "To chnage the song enter 11" << std::endl;
        std::cin >>  hold;

        if(hold == 1){
            sound.stop();
        }
        else if(hold == 2){
            sound.pause();
            std::cout << "Do you want me to resume the song " << std::endl;
            std::cin >> hold;
            if(hold == 3){
                sound.play();
            }
        }
        else if(hold == 4){
            sound.setPlayingOffset(sound.getPlayingOffset()+ sf::seconds(5.0f));
        }
        else if( hold == 5){
            sound.setPlayingOffset(sound.getPlayingOffset() - sf::seconds(5.0f));
        }
        else if(hold == 6){
            sound.setVolume(sound.getVolume() - 50.0f);
        }


    };

}
