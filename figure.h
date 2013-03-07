#ifndef FIGURE_H
#define FIGURE_H

#include "classVector.h"
#include "point.h"
#include "segment.h"

class figure
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void crossing(int num, point &p1, point &p2, segment obj1) const = 0;
};

#endif // FIGURE_H
