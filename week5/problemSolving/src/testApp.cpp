#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetBackgroundAuto(false);
    ofSetFrameRate(1);
    ofEnableSmoothing();
    me.dotSize = 9.0f;
    me.angleOffSetA = ofDegToRad(1.5);
    me.angleOffSetB = ofDegToRad(50);
    
    gui.setup(); // setups the panel
    gui.add(dotSize.setup("dotsize", 8, 1, 15));
    gui.add(angleA.setup("angleA", 1.5, 1, 5));
    gui.add(angleB.setup("angleB", 50, 1, 180));
    
}

//--------------------------------------------------------------
void testApp::update(){
    me.dotSize = dotSize;
    me.angleOffSetA = ofDegToRad(angleA);
    me.angleOffSetB = ofDegToRad(angleB);
}

//--------------------------------------------------------------
void testApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    me.seed1(me.dotSize, ofDegToRad(260), 0, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    if(key == 'p'){
        me.seed1(me.dotSize, ofDegToRad(300), 0, 0);
        cout << "this is happening" << endl;
    }
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
