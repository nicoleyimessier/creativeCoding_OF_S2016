//
//  Particle.h
//  particleSystem
//
//  Created by Nicole Messier on 4/13/16.
//
//

#ifndef __particleSystem__Particle__
#define __particleSystem__Particle__

#include <iostream>

#endif /* defined(__particleSystem__Particle__) */

#include "ofMain.h"
#include "Params.h"

class Particle{
public:
    
    //constructor
    Particle();
    
    //methods
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param;
    ofPoint pos;
    ofPoint vel;
    float time; //the time it's been alive
    float lifeTime; //maxTime particle will live
    bool live;
    ofPoint randomPointInCircle(float maxRad);
};
