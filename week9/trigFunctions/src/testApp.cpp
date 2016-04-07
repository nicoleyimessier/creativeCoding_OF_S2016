#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetBackgroundAuto(false);
    amplitude = ofGetHeight()/2;
    period = 25;
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    sine = sin(ofGetElapsedTimef()); 
    circleX = ofGetElapsedTimef()*period;
    circleY = amplitude*sin(ofGetElapsedTimef());
    
    mapX = ofMap(sine, -1, 1, 0, ofGetWidth());
    mapY = ofMap(sine, -1, 1, 0, ofGetHeight());
}

//--------------------------------------------------------------
void testApp::draw(){
    //ofTranslate(0, ofGetHeight()/2);
    ofEllipse(circleX, circleY, 10, 10);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, mapX, mapY);
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
