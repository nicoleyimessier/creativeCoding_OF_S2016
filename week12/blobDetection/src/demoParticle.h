//
//  demoParticle.h
//  blobDetection
//
//  Created by Nicole Messier on 5/2/16.
//
//

#ifndef __blobDetection__demoParticle__
#define __blobDetection__demoParticle__

#include <iostream>

#endif /* defined(__blobDetection__demoParticle__) */

#include "ofMain.h"

enum particleMode{
	PARTICLE_MODE_ATTRACT = 0,
	PARTICLE_MODE_REPEL,
	PARTICLE_MODE_NEAREST_POINTS,
	PARTICLE_MODE_NOISE
};

class demoParticle{
    
public:
    demoParticle();
    
    void setMode(particleMode newMode);
    void setAttractPoints( vector <ofPoint> * attract );
    
    void reset();
    void update( float x , float y );
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint frc;
    
    float drag;
    float uniqueVal;
    float scale;
    
    particleMode mode;
    
    vector <ofPoint> * attractPoints; 
};
