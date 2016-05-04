#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxGui.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
	ofxKinect kinect;
	
	
	ofxCvColorImage colorImg;
	ofxCvGrayscaleImage grayImage; // grayscale depth image
	ofxCvGrayscaleImage grayThreshNear; // the near thresholded image
	ofxCvGrayscaleImage grayThreshFar; // the far thresholded image
	
	ofxCvContourFinder contourFinder;
	
	bool bThreshWithOpenCV;
	
	int nearThreshold;
	int farThreshold;
	

    
    //Each frame take the number of blobs and create cursors at their centroids
    vector<ofPoint> cursors ;


    
    //ofxUI variables
    ofxPanel gui;
    ofxIntSlider threshHoldNear;
    ofxIntSlider threshHoldFar;
    
   
};
