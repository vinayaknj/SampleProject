#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string_view>
using namespace std;

class Shape { //BASE CLASS
public:
    Shape() = default;
    Shape(string_view description);
    ~Shape();

    virtual void draw() const{
        cout << "Shape draw() called: " << m_description << endl;
    }

protected: //ACCESSIBLE BY DERIVED CLASS AS WELL!!
    string m_description{"none"};
};

#endif
