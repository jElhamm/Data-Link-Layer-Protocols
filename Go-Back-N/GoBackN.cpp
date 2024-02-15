/**
  * The GoBackN class is defined, which includes the constructor to initialize the window size,
  * variables for tracking frames to send and frames expected, and functions for sender and receiver operations.
  **/



#include "GoBackN.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int MAX_SEQUENCE_NUM = 7;

// Constructor for GoBackN class
GoBackN::GoBackN(int window_size) {
    WINDOW_SIZE = window_size;
    frame_to_send = 0;
    next_frame_to_send = 0;
    frame_expected = 0;
}
 