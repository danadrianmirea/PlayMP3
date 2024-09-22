#include <SFML/Audio.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Usage: PlayMP3 filename\n";
        return -1;
    }

    // Load an MP3 file
    std::string fileToPlay(argv[1]);
    sf::Music music;
    if (!music.openFromFile(fileToPlay) ) {
        std::cerr << "Error: Could not load the MP3 file: " << fileToPlay << std::endl;
        return -1;
    }

    // Play the music
    music.play();

    // Keep the program running while the music is playing
    std::cout << "Playing music. Press Enter to stop..." << std::endl;
    std::cin.get();  // Wait for user input

    return 0;
}
