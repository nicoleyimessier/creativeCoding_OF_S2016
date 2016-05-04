#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    gui.setup();
    gui.add(threshHoldNear.setup("Near Threshhold", 100, 0, 255));
	gui.add(threshHoldFar.setup("Far Threshhold", 95, 0, 255));
    
	// enable depth->video image calibration
	kinect.setRegistration(true);
	kinect.init();
	kinect.open();		// opens first available kinect
	
	
	colorImg.allocate(kinect.width, kinect.height);
	grayImage.allocate(kinect.width, kinect.height);
	grayThreshNear.allocate(kinect.width, kinect.height);
	grayThreshFar.allocate(kinect.width, kinect.height);
	
    
	ofSetFrameRate(60);
	bThreshWithOpenCV = true;
   // bRestrictCursors = false;
    
}

//--------------------------------------------------------------
void testApp::update(){
    ofBackground(100, 100, 100);
    nearThreshold = threshHoldNear;
	farThreshold = threshHoldFar;
    
	kinect.update();
	
	// there is a new frame and we are connected
	if(kinect.isFrameNew()) {
		
		// load grayscale depth image from the kinect source
		grayImage.setFromPixels(kinect.getDepthPixels(), kinect.width, kinect.height);
		
		// we do two thresholds - one for the far plane and one for the near plane
		// we then do a cvAnd to get the pixels which are a union of the two thresholds
		if(bThreshWithOpenCV) {
			grayThreshNear = grayImage;
			grayThreshFar = grayImage;
			grayThreshNear.threshold(nearThreshold, true);
			grayThreshFar.threshold(farThreshold);
			cvAnd(grayThreshNear.getCvImage(), grayThreshFar.getCvImage(), grayImage.getCvImage(), NULL);
		}
		}
		
		// update the cv images
		grayImage.flagImageChanged();
        
		contourFinder.findContours(grayImage, 10.0 , (kinect.width * kinect.height) / 4  , 2, false );
        
        //Reset the cursors
        cursors.clear() ;
        
        
        
        //For each openCV blob normalize it and scale it by the x + y sensitivty
        //and then scale it by the window space , and prevent it from going off screen like a cursor
        for ( int i = 0 ; i < contourFinder.nBlobs ; i++ )
        {
            //Get the centroid ( which is relative to the depthImage
            ofVec2f iCentroid = contourFinder.blobs[i].centroid;
            cursors.push_back( iCentroid ) ;
        }
        
	
    
	
   

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 255, 255);
    //ofPushMatrix() ;
    
    grayImage.draw(0, 0, kinect.width , kinect.height);
    contourFinder.draw(0, 0, kinect.width, kinect.height);
    gui.draw();
    
    //ofPopMatrix() ;
    
    if ( cursors.size() > 0 )
    {
        //Iterate through
        for ( int i = 0 ; i < cursors.size() ; i++ )
        {
            ofSetColor(255, 0, 0); 
            ofCircle( cursors[i] , 12 ) ;
        }
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
