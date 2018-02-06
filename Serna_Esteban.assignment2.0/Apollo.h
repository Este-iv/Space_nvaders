# ifndef APOLLO_H
# define APOLLO_H

#include "point.h"
#include "Alien.h"

class player{
private:
  char symbol;
  char source;
  int damage;
  // int speed;
  int health;
  int lives;
  point position;
public:
  int score;
  int quit;
  player();
  int get_lives()const{
    return lives;
  }
  char get_symbol()const{
    return symbol;
  }
  int get_damage()const{
    return damage;
  }
  point get_postion()const{
    return position;
  }
  void set_position(int t){
    position.x = t;
  }
  int get_health(){
    return health;
  }
  char get_source()const{
    return source;
  }
  int get_score()const{
    return score;
  }

};





# endif
