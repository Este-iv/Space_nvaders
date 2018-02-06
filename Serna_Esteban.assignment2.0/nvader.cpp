# include <iostream>

#include <unistd.h>


# include "Alien.h"
# include "Apollo.h"
# include "space.h"
# include <ncurses.h>

// # include<>
void io_init_terminal(void)
{
        initscr();
        raw();
        noecho();
        curs_set(0);
        keypad(stdscr, TRUE);
        start_color();
        init_pair(COLOR_RED, COLOR_RED, COLOR_BLACK);
        init_pair(COLOR_GREEN, COLOR_GREEN, COLOR_BLACK);
        init_pair(COLOR_YELLOW, COLOR_YELLOW, COLOR_BLACK);
        init_pair(COLOR_BLUE, COLOR_BLUE, COLOR_BLACK);
        init_pair(COLOR_MAGENTA, COLOR_MAGENTA, COLOR_BLACK);
        init_pair(COLOR_CYAN, COLOR_CYAN, COLOR_BLACK);
        init_pair(COLOR_WHITE, COLOR_WHITE, COLOR_BLACK);
}


int main(int argc, char *argv[]){
        Map map;
        player player;
        map.player=player;
        initscr();
        io_init_terminal();
        map.player.quit = 0;
        while(map.get_lives() > 0&& map.player.quit==0) {
                // printf("%s\n","hello");
                map.update();

                map.render();

                refresh();
                // for(unsigned int i = 0; i <map.aliens.size();i++){
                //   if((point)map.aliens[i].get_postion().y == point(0,24)){
                //     mvaddstr(12,40,"Game Over!");
                //   }
                // }

//                     100000
                usleep(100000);

        }

        endwin();
        return 0;

}
