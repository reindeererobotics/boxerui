#include "BoxerUI_Model.h"

namespace BoxerUI {
	double BoxerUI_Model::getTemperature()
	{
		return BoxerUI_Model::temperature;
	}
	double BoxerUI_Model::getBattery()
	{
		return BoxerUI_Model::battery;
	}
	void BoxerUI_Model::setTemperature(double temperature)
	{
		this->BoxerUI_Model::temperature = temperature;
	}
	void BoxerUI_Model::setBattery(double battery)
	{
		this->BoxerUI_Model::battery = battery;
	}
	void BoxerUI_Model::inputHandler() {//InputType input_type=InputType::None) {

		input.keyboardInputHandler();
	}

	//void BoxerUI_Model::cameraPayloadRecv(CameraMap& cam_map, cv::VideoCapture& vid, int cam_index, bool& cam_stream)
	//{ //WIP Receive frames from socket here and create a buffer for it
	//	cv::Mat input = cv::Mat(100, 100, CV_8UC1), output;

	//	//If camera is open populate the payload_frames queue
	//	if ((vid).isOpened())
	//	{
	//		std::cout << "Camera Opened: " << cam_index << std::endl;
	//		while (cam_stream)
	//		{
	//			if (cam_map[cam_index].size() < 10)
	//			{
	//				(vid).read(input);
	//				//TODO: All module work are done here

	//				//output=CameraStream_Model::cudaStreamProc(input);

	//				(cam_map)[cam_index].emplace(input);
	//			}
	//			else
	//			{
	//				cam_map[cam_index].pop();
	//			}

	//		}
	//		input.~Mat();
	//		output.~Mat();

	//	}

	//	vid.~VideoCapture();



	//}
}