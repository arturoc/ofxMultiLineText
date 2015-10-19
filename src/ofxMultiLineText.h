/*
 * ofxMultiLineText.h
 *
 *  Created on: Oct 19, 2015
 *      Author: arturo
 */

#pragma once
#include "ofConstants.h"
#include "ofTrueTypeFont.h"

class ofxMultiLineText: public ofTrueTypeFont {
public:
	enum Adjustment{
		Left,
		Center
	};

	using ofTrueTypeFont::drawString;
	using ofTrueTypeFont::getStringBoundingBox;
	void drawString(std::string text, float x, float y, Adjustment adjust);
	ofRectangle getStringBoundingBox(std::string tex, float x, float y, Adjustment adjust);
};
