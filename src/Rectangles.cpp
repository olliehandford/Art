#include "Rectangles.hpp"
int rotation = 0;

void Rectangles::setup(){

}

void Rectangles::update(){
    
}

void Rectangles::draw()
{
	ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	ofDrawRectangle(ofRandom(0,300), ofRandom(0, 300), ofRandom(0, ofGetWindowWidth()), ofRandom(0, ofGetWindowHeight()));
}
