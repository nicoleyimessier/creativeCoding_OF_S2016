#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // enable depth->video image calibration
	kinect.setRegistration(true);
    
	kinect.init();
	//kinect.init(true); // shows infrared instead of RGB video image
	//kinect.init(false, false); // disable video image (faster fps)
	
	kinect.open();		// opens first available kinect
    
    // zero the tilt on startup
	angle = 15;
	kinect.setCameraTiltAngle(angle);
    
}

//--------------------------------------------------------------
void testApp::update(){

    kinect.update();
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    kinect.setLed(ofxKinect::LED_GREEN);
    kinect.draw(0, 20, 320, 240);
    kinect.drawDepth(0, 280, 320, 240);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key) {
          	
		case OF_KEY_UP:
			angle++;
			if(angle>30) angle=30;
			kinect.setCameraTiltAngle(angle);
			break;
			
		case OF_KEY_DOWN:
			angle--;
			if(angle<-30) angle=-30;
			kinect.setCameraTiltAngle(angle);
			break;
            
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
