#ifndef POINT_H
# define POINT_H

# include <vector>

class point {
public:
int x;
int y;
point(int a, int b){
        x = a;
        y = b;
}
point() : x(0),y(0){}
};
// std::vector<int> v
#endif
