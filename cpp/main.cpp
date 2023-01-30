#include "opencv2/highgui.hpp"
#include <iostream>

int main()
{
  constexpr int device_id = 0;
  cv::VideoCapture input_stream(device_id);

  if (!input_stream.isOpened())
  {
    std::cerr << "Could not open camera" << std::endl;
    return EXIT_FAILURE;
  }

  const std::string window_title = "Lab 0: Introduction to C++ and OpenCV";
  cv::namedWindow(window_title, cv::WINDOW_GUI_NORMAL);

  cv::Mat frame;

  while(true)
  {
    input_stream >> frame;

    if (frame.empty())
    {
      std::cerr << "The camera returned an empty frame. Is the camera ok?" << std::endl;
      break;
    }

    cv::imshow(window_title, frame);

    constexpr int delay_ms = 15;
    if (cv::waitKey(delay_ms) >= 0)
    { break; }
  }

  return EXIT_SUCCESS;
}
