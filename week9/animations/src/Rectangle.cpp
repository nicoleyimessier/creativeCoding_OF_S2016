//
//  Rectangle.cpp
//  animations
//
//  Created by Nicole Messier on 4/6/16.
//
//

#include "Rectangle.h"

Rectangle::Rectangle(){
	//initial position
    posA.x = 10;
    posA.y = 10;
    
    //final position
    posB.x = 1000;
    posB.y = 10;
}

void Rectangle::draw(){
	ofRect(pos.x, pos.y, 100, 100);
}


void Rectangle::interpolateByPct(float myPct){
    
	pct = powf(myPct, 0.1); // myPct^2=myPct*myPct
	pos.x = (1 - pct)*posA.x + pct*posB.x;
	pos.y = (1 - pct)*posA.y + pct*posB.y;
}

void Rectangle::zenoToPoint(float catchX, float catchY){
    
	pos.x = catchUpSpeed*catchX + (1 - catchUpSpeed)*pos.x;
    pos.y = catchUpSpeed*catchY + (1 - catchUpSpeed)*pos.y;
    
}
