#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

using namespace std;

//TO CALL MULTIPLE CLASSES USING ONE CLASS!!!
void draw_shape(Shape * s){ //while using virtual 
    s->draw(); 
}

//OR USE REFERENCE
void draw_shape_ref(const Shape& s){ //while using virtual 
    s.draw(); 
}

// void draw_circle(Circle& circle){ //use virtual instead
//     circle.draw(); 
// }

// void draw_oval(Oval& oval){ //use virtual instead
//     oval.draw();
// } 

int main() {

    Shape shape1("Shape1");
    // shape1.draw();

    Circle circle1(2.5,"Circle1");
    // circle1.draw();

    Oval oval1(2.1,3.22,"Oval1");
    // oval1.draw();

    //BASE POINTER
    Shape *shape_ptr1 = &shape1;
    // shape_ptr1->draw();

    shape_ptr1 = &oval1;
    // shape_ptr1->draw(); //oval will be called

    shape_ptr1 = &circle1;
    // shape_ptr1->draw();

    //shape references:

    Shape& shape_ref = oval1;
    // shape_ref.draw();

    ////////virtual use:
    //virtual will MAKE THE OBJECTS LARGER!!! 
    //using pointers at function:
    // draw_shape(&shape1);
    // draw_shape(&circle1);
    // draw_shape(&oval1);

    //using reference at function
    // draw_shape_ref(shape1);
    // draw_shape_ref(circle1);
    // draw_shape_ref(oval1);

    //VERY EFFICIENT AND EASY TO USE!! -USING VIRTUAL
    Shape *container[]{&shape1, &circle1, &oval1};
    
    for(Shape *s : container){
        s->draw();
    }

    //using functions- NOT RECOMMENDED
    // draw_circle(circle1);
    // draw_oval(oval1);


    return 0;
}

