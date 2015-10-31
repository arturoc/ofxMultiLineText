/*
 * ofxMultiLineText.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: arturo
 */

#include "ofxMultiLineText.h"

void ofxMultiLineText::drawString(std::string text, float x, float y, Adjustment adjust){
	switch(adjust){
		case Left:
			drawString(text,x,y);
			break;
		case Center:{
			auto bb = getStringBoundingBox(text,x,y,adjust);
			x += bb.getWidth()/2;
			ofStringReplace(text,"\r\n","\n");
			auto lines = ofSplitString(text,"\n",false,false);
			auto yp = y;
			for(auto & line: lines){
				auto bb = getStringBoundingBox(line,0,0);
				auto xp = x - bb.getWidth() / 2;
				drawString(line,xp,yp);
				yp += getLineHeight();
			}
			break;
		}
	}
}

ofRectangle ofxMultiLineText::getStringBoundingBox(std::string text, float x, float y, Adjustment adjust){
	switch(adjust){
		case Left:
			return getStringBoundingBox(text,x,y);
			break;
		case Center:{
			ofRectangle bb;
			ofStringReplace(text,"\r\n","\n");
			auto lines = ofSplitString(text,"\n",false,false);
			auto yp = y;
			for(auto & line: lines){
				auto thisbb = getStringBoundingBox(line,0,0);
				auto xp = x - thisbb.getWidth() / 2;
				thisbb = getStringBoundingBox(line,xp,yp);
				bb = bb.getUnion(thisbb);
				yp += getLineHeight();
			}
			bb.x += bb.width/2.f;
			return bb;
			break;
		}
	}
}
