# ifndef SPACE_H
# define SPACE_H

# include <vector>
# include <ncurses.h>


#include "Alien.h"
#include "Apollo.h"
#include "point.h"
#include "Blast.h"



using namespace std;
// Blast vectors go here
class Map : public player {
private:
char map[24][80];



public:
vector<Alien> aliens;
player player;
vector<Blast> pew;
// vector<Blast> pew1;
Map();
void update();
int get_lives() const {
        return player.get_lives();
}
// clear and update and refesh, all ncurses should happen in here.
void render() const {
        clear();
        for(int i = 0; i < 24; ++i) {
                for(int j = 0; j < 80; ++j) {
                        mvaddch(i,j,map[i][j]);
                }
        }
        mvaddstr(24,0,"Score:");
        mvaddch(24,7,'0');
        mvaddstr(24,73,"Lives:");
        mvaddch(24,80,'3');
        mvaddch(player.get_postion().y,player.get_postion().x,player.get_symbol());

        for(unsigned int i = 0; i < aliens.size(); ++i) {
                int x = aliens[i].get_postion().x;
                int y = aliens[i].get_postion().y;
                mvaddch(y,x,aliens[i].get_symbol());
                //generate vector y2;
            //     vector<int> y2{int y};
            //     pew = y2.subtract(y2-3);
            //     aliens.rand_shoot();
            //
            //     int b0[3] ={pew.subtract(y2-2),pew.subtract(y2-4)
            //       ,pew.subtract(y2-6)};
            // for(int i = 0; i < 3 ; i++){
            // aliens.shoot(b0[i],aliens[i].get_postion().x);
          // }
        }

}


};


# endif
