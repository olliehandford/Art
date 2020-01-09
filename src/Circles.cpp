//
//  Circles.cpp
//  abstractArt
//
//  Created by Jake Hobbs on 16/12/2019.
//

#include "Circles.hpp"

void Circles::setup(){

}

void Circles::update(){
    
}

void Circles::draw(){
	for (int i = 0; i < 20; i++) {
		ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
		ofDrawCircle(ofRandom(0, ofGetWindowWidth()), ofRandom(0, ofGetWindowHeight()), ofRandom(5,500));
	}

	
}
