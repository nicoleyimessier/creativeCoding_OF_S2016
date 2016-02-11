//
//  Alien.h
//  manyClasses
//
//  Created by Nicole Messier on 2/10/16.
//
//

#ifndef __manyClasses__Alien__
#define __manyClasses__Alien__

#include <iostream>

#endif /* defined(__manyClasses__Alien__) */

#include "ofMain.h"

class Alien{
    public:
    
    //properties
    int xPos, yPos;
    int velX, velY;
    int r, g, b;
    int diam; 
    
    //constructor
    Alien();
    
    //method
    void setup(float _x, float _y);
    void update();
    void draw(); 
    
};

