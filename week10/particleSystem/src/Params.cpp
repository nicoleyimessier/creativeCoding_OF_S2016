//
//  Params.cpp
//  particleSystem
//
//  Created by Nicole Messier on 4/13/16.
//
//

#include "Params.h"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 50;
    velRad = 200;
    lifeTime = 2.0;
    rotate = 90;
}