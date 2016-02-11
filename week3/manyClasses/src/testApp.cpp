#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    scully.setup(ofGetWidth()/2, ofGetHeight()/2);
    booBoo.setup(100, 100);
}

//--------------------------------------------------------------
void testApp::update(){
    scully.update();
    booBoo.update();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].update();
        
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    scully.draw();
    booBoo.draw();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].draw();
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
    Alien tempAlien;
    tempAlien.setup(x, y);
    myAliens.push_back(tempAlien);
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
