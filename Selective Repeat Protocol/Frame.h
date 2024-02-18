/**
  * This code defines a header file. The Frame class has three member variables:
  * seqNum of type int to store the sequence number, data of type std::string to store data, 
  * and ack of type bool to represent acknowledgment.
  * The class also includes a constructor that initializes the seqNum and data member variables.
  * The code is wrapped inside include guards to prevent multiple declarations when the header file is included in different source files.
 **/



#ifndef FRAME_H
#define FRAME_H
#include <string>


class Frame {
public:
    int seqNum;
    std::string data;
    bool ack;
};

#endif