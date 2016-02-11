#include "testApp.h"

void testApp::drawCircle(float x, float y, float diam){

    ofEllipse(x, y, diam, diam);
    diam = diam*0.7;
    if(diam>5){
        drawCircle(x, y, diam);
    }
}

void testApp::drawBranch(float length, float theta){
    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.4;
    
    if(length>2){
    
        
    ofPushMatrix();
    ofRotate(theta);
    drawBranch(length, theta);
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotate(-theta);
    drawBranch(length, theta);
    ofPopMatrix();
    
    }
}

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    //ofSetBoxResolution(100);
//    ofSetColor(255);
//    ofNoFill();
//    drawCircle(ofGetWidth()/2, ofGetHeight()/2, 500);
    ofSetColor(255, 0, 0);
    ofFill();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(500, cos(ofGetElapsedTimef())*100);
    drawBranch(200, 30);
    
    
//    ofLine(0, 0, 0, -200);
//    
//    ofSetColor(255, 0, 0);
//    ofFill();
//    
//    ofTranslate(0, -200);
//    ofRotate(60);
//    ofLine(0, 0, 0, -200);
//}
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
