#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
    private:
        string name[20];
        int currentTrack = 0;
        int i = 0;

    public:
        void add(string music) {
            name[i] = music;
            i++;
        }
        
        int setCurrentTrack(int currentTrack) {
            this->currentTrack = currentTrack - 1;
        }

        string play() {
            return name[currentTrack];
        }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}