#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    //olor(255, 0, 0);
   
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == 'p'){
        myBranch.setup( ofGetWidth()/2, //float _xPos,
                       ofGetHeight()/2, //float _yPos,
                   100, //float _length,
                   10, //float _width,
                   0.45,//float _splitPercentage,
                   PI/5, //float _maxSplitAngle,
                   2, //float _maxSubdivisions,
                   5,//float _maxSegments,
                   0, //float _segmentsSinceStart,
                   -PI/2, //float _angle,
                   0, //float _curvature,
                       ofColor(255, 0, 0) //ofColor _color
                       );
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
