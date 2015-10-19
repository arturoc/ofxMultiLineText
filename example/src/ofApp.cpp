#include "ofApp.h"

const std::string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n"
		"Donec a diam lectus. Sed sit amet ipsum mauris.\n"
		"Maecenas congue ligula ac quam viverra nec consectetur ante hendrerit.\n"
		"Donec et mollis dolor. Praesent et diam eget libero egestas mattis sit\n"
		"amet vitae augue. Nam tincidunt congue enim, ut porta lorem lacinia\n"
		"consectetur. Donec ut libero sed arcu vehicula ultricies a non tortor.\n"
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n"
		"Aenean ut gravida lorem. Ut turpis felis, pulvinar a semper sed, adipiscing\n"
		"id dolor. Pellentesque auctor nisi id magna consequat sagittis. Curabitur\n"
		"dapibus enim sit amet elit pharetra tincidunt feugiat nisl imperdiet.\n"
		"Ut convallis libero in urna ultrices accumsan. Donec sed odio eros.\n"
		"Donec viverra mi quis quam pulvinar at malesuada arcu rhoncus.\n"
		"Cum sociis natoque penatibus et magnis dis parturient montes, nascetur\n"
		"ridiculus mus. In rutrum accumsan ultricies. Mauris vitae nisi at sem\n"
		"facilisis semper ac in est.";

//--------------------------------------------------------------
void ofApp::setup(){
	ttf.load(OF_TTF_SANS, 14);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ttf.drawString(text,20,20,ofxMultiLineText::Center);
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
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
