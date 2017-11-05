#pragma once
#include "ofMain.h"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_calib3d330d.lib")
#pragma comment(lib,"opencv_core330d.lib")
#pragma comment(lib,"opencv_dnn330d.lib")
#pragma comment(lib,"opencv_features2d330d.lib")
#pragma comment(lib,"opencv_flann330d.lib")
#pragma comment(lib,"opencv_highgui330d.lib")
#pragma comment(lib,"opencv_imgcodecs330d.lib")
#pragma comment(lib,"opencv_imgproc330d.lib")
#pragma comment(lib,"opencv_ml330d.lib")
#pragma comment(lib,"opencv_objdetect330d.lib")
#pragma comment(lib,"opencv_photo330d.lib")
#pragma comment(lib,"opencv_shape330d.lib")
#pragma comment(lib,"opencv_stitching330d.lib")
#pragma comment(lib,"opencv_superres330d.lib")
#pragma comment(lib,"opencv_video330d.lib")
#pragma comment(lib,"opencv_videoio330d.lib")
#pragma comment(lib,"opencv_videostab330d.lib")
#else
#pragma comment(lib,"opencv_calib3d330.lib")
#pragma comment(lib,"opencv_core330.lib")
#pragma comment(lib,"opencv_dnn330.lib")
#pragma comment(lib,"opencv_features2d330.lib")
#pragma comment(lib,"opencv_flann330.lib")
#pragma comment(lib,"opencv_highgui330.lib")
#pragma comment(lib,"opencv_imgcodecs330.lib")
#pragma comment(lib,"opencv_imgproc330.lib")
#pragma comment(lib,"opencv_ml330.lib")
#pragma comment(lib,"opencv_objdetect330.lib")
#pragma comment(lib,"opencv_photo330.lib")
#pragma comment(lib,"opencv_shape330.lib")
#pragma comment(lib,"opencv_stitching330.lib")
#pragma comment(lib,"opencv_superres330.lib")
#pragma comment(lib,"opencv_video330.lib")
#pragma comment(lib,"opencv_videoio330.lib")
#pragma comment(lib,"opencv_videostab330.lib")
#endif

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void mouseEntered(int x, int y) {};
	void mouseExited(int x, int y) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	cv::Mat frame;
	ofImage frame_image;
};