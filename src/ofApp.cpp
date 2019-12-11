#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);  // Clear the screen with a black color
  ofSetColor(255);  // Set the drawing color to white
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
  ofSeedRandom(39);

  float w = ofGetWidth()/6, h = ofGetHeight()/6;

  for( int r = 0; r < 6; r++)
  {
    for( int c = 0; c < 6; c++)
    {
      int direction = ofMap(ofRandomuf(), 0.0, 1.0, 0.0, 4.0);
      int lines = ofMap(ofRandomuf(), 0.0, 1.0, 1.0, 12.0);

      switch( direction)
      {
        case 0 : // horizontal
          lines *= 2;
          for( int i=0; i<lines; i++)
            ofDrawLine(w*c, h*r + h/lines/2 + i*(h/lines), w*(c+1), h*r + h/lines/2 + i*(h/lines));
          break;

        case 1 : // right-down
            for( int i=0; i<lines; i++)
            {
              ofDrawLine(w*c, h*(r+1) - h/lines/2 - i*(h/lines),
                          w*c + w/lines/2 + i*(w/lines), h*(r+1));
              ofDrawLine(w*(c+1), h*(r) + h/lines/2 + i*(h/lines),
                          w*(c+1) - w/lines/2 - i*(w/lines), h*(r));
            }
          break;

        case 2 : // vertical
          lines *= 2;
          for( int i=0; i<lines; i++)
            ofDrawLine(w/lines/2 + w*c + i*(w/lines), h*r, w/lines/2 + w*c + i*(w/lines), h*(r+1));
          break;

        case 3 : // left-down
          for( int i=0; i<lines; i++)
          {
            ofDrawLine(w*c, h*(r) + h/lines/2 + i*(h/lines),
                        w*c + w/lines/2 + i*(w/lines), h*(r));
            ofDrawLine(w*(c+1), h*(r) + h/lines/2 + i*(h/lines),
                        w*(c) + w/lines/2 + i*(w/lines), h*(r+1));
          }
          break;
      }

    }
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
