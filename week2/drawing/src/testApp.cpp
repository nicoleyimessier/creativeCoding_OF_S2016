#include "testApp.h"

void testApp::diamond(ofPoint center, float width, float height){
    //line 1
    ofLine(center.x - width/2, center.y, center.x, center.y-height/2);
    
    // line 2
    ofLine(center.x, center.y-height/2, center.x+width/2, center.y);
    
    //line 3
    ofLine(center.x+width/2, center.y, center.x, center.y+height/2);
    
    //line 4
    ofLine(center.x, center.y + height/2, center.x - width/2, center.y);
    
}

//--------------------------------------------------------------
void testApp::setup(){
    //stops it from drawing continuous background 
    ofSetBackgroundAuto(false);
    circleX = 0;
    center2.x = ofGetWidth()/2;
    center2.y = ofGetHeight()/2;
    height2 = 300;
    width2 = 300;
}

//--------------------------------------------------------------
void testApp::update(){
    circleX = circleX + 1;
}

//--------------------------------------------------------------
void testApp::draw(){
    // change the background of color
    //ofBackground(0);
    //set color for drawing
    ofSetColor(255, 0, 0);
    //ofEllipse(circleX, ofGetHeight()/2, 200, 200);
    //add text to the screen
    ofDrawBitmapString("Hello World!", 100, 100);
    
    //cout << "Hello world!" << endl;
    cout << "circleX: " << circleX << endl;
    diamond(center2, width2, height2);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
