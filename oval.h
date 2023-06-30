#ifndef OVAL_H
#define OVAL_H

#include "Shape.h"
using namespace std;

class Oval : public Shape{ //derived CLASS
public:
    Oval() = default;
    Oval(double x_rad, double y_rad,
    string_view description);
    ~Oval();

    virtual void draw() const{
        cout << "Oval draw() called: " << m_description 
        << "\n with m_x_radius: " << m_x_radius 
        << " and with m_y_radius: " << m_y_radius <<endl;
    }

protected:
    double get_x_rad() const{
        return this->m_x_radius;
    }
    double get_y_rad() const{
        return this->m_y_radius;
    }

private: //ACCESSIBLE BY DERIVED CLASS AS WELL!!
    double m_x_radius{};
    double m_y_radius{};
};

#endif
