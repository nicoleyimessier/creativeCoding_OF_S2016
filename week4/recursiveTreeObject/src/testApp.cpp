#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetBackgroundAuto(false);
    ofSetFrameRate(1);
    ofEnableSmoothing();
    me.dotSize = 9.0f;
    me.angleOffSetA = ofDegToRad(1.5);
    me.angleOffSetB = ofDegToRad(50);
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
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
