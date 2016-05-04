#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

class ofApp : public ofBaseApp{
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

    
    //----------------------------------------------------------

    
    bool subtraction;
    bool dilate;
    bool erode;
    bool blur;
    
    float threshold;
    float range;
    
    ofColor color;
    
    ofVec3f ball;
    ofVec2f velocity;
    
    ofVideoGrabber grabber;
    
    ofxCvColorImage rgb;
    ofxCvGrayscaleImage background;
    ofxCvGrayscaleImage grayscale;
    ofxCvGrayscaleImage roi;
    ofxCvGrayscaleImage red;
    ofxCvGrayscaleImage green;
    ofxCvGrayscaleImage blue;
    ofxCvGrayscaleImage difference;
    
    ofxCvContourFinder contour;
    
    void updateBallPosition();
    void drawBall();
    
    void debugDraw();

};
