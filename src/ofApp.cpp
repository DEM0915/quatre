#include "ofMain.h"
#include "ofApp.h"

void ofApp::setup(){
    
    ofBackground(234, 244, 252, 70);
    ofHideCursor();
    meiyi.load("van.jpg");
    x_pos = (ofGetWidth() - meiyi.getWidth())/2;
    y_pos = (ofGetHeight() - meiyi.getHeight())/2;
    
}

void ofApp::draw(){
    
    meiyi.draw(x_pos, y_pos);
}

int main(){
    
    ofSetupOpenGL(1024,768,OF_FULLSCREEN);
    ofRunApp(new ofApp());
}

