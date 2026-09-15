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
        std::cout << "Enter:1 to Quit: \n";
        std::cout << "Enter: 2 to pause the song: \n";
        std::cout << "Enter: 4 to skip 5 secs forwards\n";
        std::cout << "Enter 5:to go back 5 secs\n";
        std::cout << "Enter 6: to decrease volume by 10%\n";
        



        std::cin >>  hold;

        if(hold == 1){
            sound.stop();
        }
        else if(hold == 2){
            sound.pause();
            std::cout << "Do you want me to resume the song " << std::endl;
            std::cout << "Enter: 3 to resume the pause\n";
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
            sound.setVolume(sound.getVolume() - 10.0f);
        }


    };

}
