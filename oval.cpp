#include "oval.h"
using namespace std;

Oval::Oval(double x_rad, double y_rad, string_view description)
    :Shape(description), m_x_radius(x_rad), m_y_radius(y_rad) {}

Oval::~Oval(){
    cout << "destructor for oval: " << endl;
}