/**
  * This code defines the constructor for the `Frame` class.
  * It takes an integer `seq` and a constant reference to a string `d` as parameters to initialize
  * the `seqNum` and `data` member variables of the `Frame` object being created.
  * It also sets the `ack` member variable to `false` by default.
 **/



#include "Frame.h"


Frame::Frame(int seq, const std::string& d) : seqNum(seq), data(d), ack(false) {}