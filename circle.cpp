#include "circle.h"
using namespace std;

Circle::Circle(double x_rad, string_view description)
    :Oval(x_rad, x_rad, description) {}

Circle::~Circle(){
    cout << " destructor: Circle called" << endl;
}