#include "Point.h"
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


Point::Point(float _x, float _y)
{
    this->x = _x;
    this->y = _y;
}

float Point::hypoCalcu() const {
    return pow (pow(this->x, 2) + pow(this->y, 2), 0.5);
}

ostream& operator<<(ostream & os, const Point &p) {
    os << '(' << p.x << ',' << p.y << ')';
    return os;
}

istream& operator>>(istream & is, Point &p) {
    is >> p.x >> p.y;
    return is;
}

bool operator<(const Point p1, const Point p2) {
    return (p1.hypoCalcu() < p2.hypoCalcu());
}