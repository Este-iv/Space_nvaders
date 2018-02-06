#include "Apollo.h"
#include "point.h"
#include <vector>

player::player(){
  symbol = '^';
  health = 2;
  // speed = 10;
  damage = 1;
  score = 0;
  position = point(40,23);
  lives = 3;
}
