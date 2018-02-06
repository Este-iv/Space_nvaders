
#include "Alien.h"
#include "point.h"





void Alien::update(){
        if(state == MOVING_LEFT) {
                position.x--;
                if(position.x == startX) {
                        state = MOVING_DOWN;
                }
        }else if(state== MOVING_RIGHT) {
                position.x++;
                if(position.x ==endX) {
                        state = MOVING_DOWN;
                }
        }else{
                position.y++;
                if(startX == position.x) {
                        state = MOVING_RIGHT;
                }
                else{
                        state = MOVING_LEFT;

                }
        }
}

Alien::Alien(point x, char s ){
  state = MOVING_RIGHT;
  damage = 1;
  position = x;
  symbol = s;
  health = 1;
  // source = a;
  startX = x.x;
  endX = startX+68;
}

// Alien::shoot(int y ,int x){
//   // int i;
//   // for(i =0; i <3; ++i){
//     mvaddch(y,x,'|');
//   // }

// }
