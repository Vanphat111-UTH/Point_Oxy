#pragma once
#include <iostream>



class Point {
    private:
        float x, y;
        float hypoCalcu() const;
    public:
        Point();
        Point(float _x, float _y);
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
        friend std::istream& operator>>(std::istream& is, Point &p);
        friend bool operator<(const Point p1, const Point p2);

};