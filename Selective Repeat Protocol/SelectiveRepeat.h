/**
  * This code is a header file for a class called `SelectiveRepeat`, which contains a static method `execute`.
  * The `execute` method takes a vector of `Frame` objects and an integer `windowSize` as parameters.
  * This class likely implements the Selective Repeat protocol for handling data transmission in a network system.
 **/



#ifndef SELECTIVE_REPEAT_H
#define SELECTIVE_REPEAT_H
#include "Frame.h"
#include <vector>


class SelectiveRepeat {
public:
    static void execute(std::vector<Frame>& frames, int windowSize);
};

#endif