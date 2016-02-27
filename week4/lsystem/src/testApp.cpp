#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    current = "A";
    next = "";
    count = 0;
    mover = 10; //y value of ofBitmapdrawstring...
    screenText = false;
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    if(screenText == true){
        ofDrawBitmapString("generation" + ofToString(count) + ": " + ofToString(current), 10, mover);
    }
    
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
    for(int i=0; i < current.size(); i++){
        char checker = current[i];
        
        if(checker == 'A'){
            next += "AB";
        } else if(checker == 'B'){
            next += "A";
        }

    }
    
    current = next;
    count++;
    mover += 20;
    screenText = true; 
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    screenText = false;
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
