// Handles the map mechanics
#include "space.h"
#include "Alien.h"
#include "Apollo.h"
#include "Blast.h"


// #include<rand.h>
# include <vector>

// int game = 1;
Map::Map() {
        this->player=player;
        for (unsigned int y = 0; y < 24; ++y) {
                for (unsigned int x = 0; x < 80; ++x) {
                        map[y][x] = ' ';
                        for (int i = 5; i <= 8; i++) {
                                map[21][i] = '#';
                                map[22][i] = '#';
                                // mvaddch(i, 21, map[i][21]);
                                // mvaddch(i, 21, map[i][22]);
                                // mvaddch(i, 22, '#');
                                // add more floors (27-30) (49-52) (71-74)
                        }
                        for (int i = 27; i <= 30; i++) {
                                map[21][i] = '#';
                                map[22][i] = '#';
                                // mvaddch(i, 21, '#');
                                // mvaddch(i, 22, '#');
                                // mvaddch(i, 21, map[i][21]);
                                // mvaddch(i, 21, map[i][21]);
                                // add more floors (27-30) (49-52) (71-74)
                        }
                        for (int i = 49; i <= 52; i++) {
                                map[21][i] = '#';
                                map[22][i] = '#';
                                // mvaddch(i, 21, '#');
                                // mvaddch(i, 22, '#');
                                // mvaddch(i, 21, map[i][21]);
                                // mvaddch(i, 21, map[i][21]);
                                // add more floors (27-30) (49-52) (71-74)
                        }
                        for (int i = 71; i <= 74; i++) {
                                map[21][i] = '#';
                                map[22][i] = '#';
                                // mvaddch(i, 21, '#');
                                // mvaddch(i, 22, '#');
                                // mvaddch(i, 21, map[i][21]);
                                // mvaddch(i, 21, map[i][21]);
                                // add more floors (27-30) (49-52) (71-74)
                        }

                        for (int x = 0; x < 12; ++x) {
                                aliens.push_back(Alien(point(x, 0), 'w'));
                                aliens.push_back(Alien(point(x, 1), 'x'));
                                aliens.push_back(Alien(point(x, 2), 'x'));
                                aliens.push_back(Alien(point(x, 3), 'o'));
                                aliens.push_back(Alien(point(x, 4), 'o'));
                        }
                      
                }

        }

}


// player movement done in here.
// player score done in here.
// blasts from player or aline are done in here.
// most and everything happens in the game function.

// notes --
// Do i encase the whole thing in an if statement if
//     enimies make it all the way to the end or where the pc is??
void Map::update() {
        // curs_set(0);




        nodelay(stdscr,TRUE);


        int key = getch();
        int nextX = player.get_postion().x;

        switch (key) {
        case KEY_LEFT:
                if(nextX != 0) {
                        --nextX;
                }
                break;
        case KEY_RIGHT:
                if(nextX != 80) {
                        ++nextX;
                }
                break;
        case 'Q':
                player.quit = 1;
                break;
        case 37:
                break;
        }
        player.set_position(nextX);


        for (unsigned int i = 0; i < aliens.size(); ++i) {
                aliens[i].update();
        }


}
