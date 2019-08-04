#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("Picture Perfect");
	ofSetFullscreen(true);
	ofHideCursor();
	screen_header.load("SEGA.TTF", 100);
	screen_subfont.load("SEGA.TTF", 60);
	music.load("song.wav");
	music.setLoop(true);
	music.play();
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	if (start_screen) {
		drawStartScreen();
	}
	if (!start_screen && !game_over) {
		drawWinFace();
	}
	if (game_over) {
		drawGameOver();
	}
}

void ofApp::drawStartScreen() {
	ofSetColor(219, 0, 204);
	screen_header.drawString("PICTURE PERFECT", 300, 600);
	screen_subfont.drawString("Press  S  to Start", 560, 800);
	screen_subfont.drawString("Press  Esc  to Exit", 548, 900);
}

void ofApp::drawWinFace() {
	mouth1.draw(300, 30);
}

void ofApp::drawGameOver() {
	if (win_game) {
		ofSetColor(219, 0, 204);
		screen_header.drawString("YOU WIN", 600, 600);
	}
	else {
		ofSetColor(219, 0, 204);
		screen_header.drawString("YOU LOSE", 600, 600);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	int upper_key = toupper(key);

	if (upper_key == 'S') {
		start_screen = false;

	}

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
