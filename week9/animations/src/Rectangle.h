//
//  Rectangle.h
//  animations
//
//  Created by Nicole Messier on 4/6/16.
//
//

#ifndef __animations__Rectangle__
#define __animations__Rectangle__

#include <iostream>

#endif /* defined(__animations__Rectangle__) */

//Rectangle header file

#include "ofMain.h"

class Rectangle{
public:
    //constructor
    Rectangle();
    
    //methods
    void draw();
    void interpolateByPct(float myPct);
    
    //params
    ofPoint posA, posB, pos;
    float pct;
    
    //zeno
    void zenoToPoint(float catchX, float catchY);
    float catchUpSpeed;
};


