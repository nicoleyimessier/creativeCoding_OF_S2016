#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    kinect.setRegistration(true);
    kinect.init();
    kinect.open();        // opens first available kinect
    
    depthImage.allocate(kinect.width, kinect.height);
	//depthThreshFar.allocate(kinect.width, kinect.height);
    
    kinectAnglePitch = 0;
    kinect.setCameraTiltAngle(kinectAnglePitch);
    

    cameraZoom = -1000;
    
    gui.setup();
    gui.add(guiNear.setup("Near", 1000, 0, 8000));

}

//--------------------------------------------------------------
void testApp::update(){
    
    //ofBackground(0, 0, 0);
	kinect.update();
    
	// there is a new frame and we are connected
	if(kinect.isFrameNew()) {
        
		// load depthscale depth image from the kinect source
		depthImage.setFromPixels(kinect.getDepthPixels(), kinect.width, kinect.height);
        
        depthImage.flagImageChanged();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
    gui.draw();
    //ofEnableDepthTest();
    
    //depthImage.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
    
    depthImage.threshold(guiNear, true);
    
    easyCam.begin();
    drawPointCloud();
    easyCam.end(); 

}

//--------------------------------------------------------------

void testApp::drawPointCloud(){
    int w = kinect.width;
    int h = kinect.height;
    
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_POINTS);
    int step = 1;
    for (int y = 0; y < h; y += step) {
        for (int x = 0; x < w; x += step) {
            if (kinect.getDistanceAt(x, y) > 0) {
                    mesh.addColor(kinect.getColorAt(x,y));
                    mesh.addVertex(kinect.getWorldCoordinateAt(x, y));
                
            }
        }
    }
    glPointSize(2);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0,0, cameraZoom);
    ofEnableDepthTest();
    mesh.drawVertices();
    ofDisableDepthTest();
    ofPopMatrix();
    
}

void testApp::keyPressed(int key){
    switch(key) {
    
    case OF_KEY_LEFT:
        cameraZoom-=10;
        break;
        
    case OF_KEY_RIGHT:
        cameraZoom+=10;
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
