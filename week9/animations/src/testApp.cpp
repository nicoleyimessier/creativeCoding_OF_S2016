#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    pct = 0;
    myRectangle.pos.x = 10;
    myRectangle.pos.y = 10;
    myRectangle.catchUpSpeed = 0.03;

}

//--------------------------------------------------------------
void testApp::update(){
    pct += 0.01;
    
    if(pct>1){
        pct = 0;
    }
    
    //myRectangle.interpolateByPct(pct);
    myRectangle.zenoToPoint(1000, 10);
}

//--------------------------------------------------------------
void testApp::draw(){
    myRectangle.draw();
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
