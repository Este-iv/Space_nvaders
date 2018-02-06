# ifndef BLAST_H
# define BLAST_H
# include "Apollo.h"
# include "Alien.h"
# include "point.h"
// # include "space.h"
# include <vector>

using namespace std;

class Blast{
private:
  char source; // p - > player , a-> alien.
  int damage;
  point velocity;

  point position;
public:
  Blast(char s, int d, point p, point v);

  void update(){
    // if it goes off the grid or hits something
    // delete the blast
    // but if it hits the source it will decrement the health
    //


      position.x +=velocity.x;
      position.y +=velocity.y;

  }
  int get_damge()const{
    return damage;
  }
  char get_source()const{
    return source;
  }
  point get_postion()const{
    return position;
  }
};






# endif
