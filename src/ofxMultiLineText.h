/*
 * ofxMultiLineText.h
 *
 *  Created on: Oct 19, 2015
 *      Author: arturo
 */

#pragma once
#include "ofConstants.h"
#include "ofTrueTypeFont.h"

class ofxMultiLineText {
public:
	enum Adjustment{
		Left,
		Center
	};


	void setup(std::string path, int fontSize);
	void drawString(std::string text, float x, float y, Adjustment adjust);
	ofRectangle getBoundingBox(std::string tex, float x, float y, Adjustment adjust);
private:
	ofTrueTypeFont ttf;
};
