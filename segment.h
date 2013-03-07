#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"
#include <math.h>

class segment
{
public:
    point t1, t2;
    segment()
    { }
    segment(int _t1, int _t2): t1(_t1), t2(_t2)
    { }
    double length()
    {
        return sqrt(pow(t1.x - t2.x, 2) + pow(t1.y - t2.y, 2));
    }
    // Ax + By + C = 0
    double A()
    {
        if (t1.y == t2.y)
            return 0;
        else return 1;
    }
    double B()
    {
        if (t1.x == t2.x)
            return 0;
        else return -(t1.x - t2.x)/(t1.y - t2.y);
    }
    double C()
    {
        return -(this->A() * t1.x + this->B() * t1.y);
    }
};

#endif // SEGMENT_H
