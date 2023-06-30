#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string_view>
#include "oval.h"
#include "shape.h"
using namespace std;

class Circle : public Oval{ //BASE CLASS
public:
    Circle() = default;
    Circle(double x_rad, string_view description);
    ~Circle();

    virtual void draw() const{
        cout << "Circle draw() called: " << m_description 
        << "\n with m_x_rad: " << get_x_rad() << endl;
    }
};

#endif
