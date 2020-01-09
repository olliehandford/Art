#include "ofApp.h"

//--------------------------------------------------------------
ofFbo fbo;
bool d = true;
void ofApp::setup(){
    rectangles.setup();
    circles.setup();
    lines.setup();
    triangles.setup();
    
	fbo.allocate(ofGetWindowWidth(), ofGetWindowHeight(), GL_RGBA);
}

//--------------------------------------------------------------
void ofApp::update(){
    rectangles.update();
    circles.update();
    lines.update();
    triangles.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (d) {
		fbo.begin();
		rectangles.draw();
		circles.draw();
		lines.draw();
		triangles.draw();
		fbo.end();
		d = false;
	}
	else {
		fbo.draw(0, 0);
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
