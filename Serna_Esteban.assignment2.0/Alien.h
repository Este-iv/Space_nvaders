# ifndef ALIEN_H
# define ALIEN_H

# include "point.h"
# include <stdlib.h>     /* srand, rand */
# include <time.h>

class Alien{
  enum State{
    MOVING_LEFT,
    MOVING_RIGHT,
    MOVING_DOWN
  };
private:
  State state;
  char symbol;
  char source;
  int damage;
  // int speed;
  int health;
  // int pointsl
  point position;
  int startX;
  int endX;
public:
  Alien(point x, char s);
  void update();
  point get_postion()const{
    return position;
  }
  // void set_position(int t)const{
  //   position.x = t;
  // }
  char get_symbol()const{
    return symbol;
  }
  int get_points() const{
    if (symbol =='x')
      return 10;
    if (symbol == 'o')
      return 20;
    if (symbol == 'w')
      return 40;
    return 0;
  }
  int get_health(){
    return health;
  }
  char get_source()const{

    return source;
  }
  // int rand_shoot(){
  //   srand(time(NULL));
  //   int randx rand() % 79 +0;
  //   int randy rand() % 3 +0;
  //
  // }
  // char shoot(int y, int x);

};



# endif
