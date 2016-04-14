#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetBackgroundAuto(false);
    time0 = ofGetElapsedTimef();
    //p.param.setup(); //this is setting up our emitter
    bornCount = 0;
    bornRate = 1500; 
}

//--------------------------------------------------------------
void testApp::update(){
    time = ofGetElapsedTimef();
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    //deleting particles
    for(int i =0; i<p.size(); i++){
        if (!p[i].live) { //!p.live is the same thing is p.live ==false
            p.erase(p.begin() + i);
        }
    }
    
    //p.update(dt);
    
    
    bornCount += dt*bornRate;
    
    if(bornCount>1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i = 0; i < bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
        }
        
    }
    
    for(int i =0; i<p.size(); i++){
        p[i].update(dt);
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    //p.draw();
    for(int i = 0; i <p.size(); i++){
        p[i].draw();
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
