/*
 * ofxMultiLineText.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: arturo
 */

#include "ofxMultiLineText.h"

void ofxMultiLineText::setup(std::string path, int fontSize){
	ttf.load(path,fontSize,true,true);
}

void ofxMultiLineText::drawString(std::string text, float x, float y, Adjustment adjust){
	switch(adjust){
		case Left:
			ttf.drawString(text,x,y);
			break;
		case Center:{
			auto bb = getBoundingBox(text,x,y,adjust);
			x += bb.getWidth()/2;
			ofStringReplace(text,"\r\n","\n");
			auto lines = ofSplitString(text,"\n",false,false);
			auto yp = y;
			for(auto & line: lines){
				auto bb = ttf.getStringBoundingBox(line,0,0);
				auto xp = x - bb.getWidth() / 2;
				ttf.drawString(line,xp,yp);
				yp += ttf.getLineHeight();
			}
			break;
		}
	}
}

ofRectangle ofxMultiLineText::getBoundingBox(std::string text, float x, float y, Adjustment adjust){
	switch(adjust){
		case Left:
			return ttf.getStringBoundingBox(text,x,y,adjust);
			break;
		case Center:{
			ofRectangle bb;
			ofStringReplace(text,"\r\n","\n");
			auto lines = ofSplitString(text,"\n",false,false);
			auto yp = y;
			for(auto & line: lines){
				auto thisbb = ttf.getStringBoundingBox(line,0,0);
				auto xp = x - thisbb.getWidth() / 2;
				thisbb = ttf.getStringBoundingBox(line,xp,yp);
				bb = bb.getUnion(thisbb);
				yp += ttf.getLineHeight();
			}
			return bb;
			break;
		}
	}
}
