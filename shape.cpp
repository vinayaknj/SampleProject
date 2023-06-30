#include "shape.h"
using namespace std;

Shape::Shape(string_view description)
    :m_description(description) {}

Shape::~Shape(){
    cout << " destructor: shape called" << endl;
}