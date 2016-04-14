//
//  Params.h
//  particleSystem
//
//  Created by Nicole Messier on 4/13/16.
//
//

#ifndef __particleSystem__Params__
#define __particleSystem__Params__

#include <iostream>

#endif /* defined(__particleSystem__Params__) */

#include "ofMain.h"

class Params{
public:
    void setup();
    ofPoint eCenter; //center of the emitter
    float eRad; // radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount
    
    float attraction;
    float repulsion;
    float friction;
    float spinning;
};
