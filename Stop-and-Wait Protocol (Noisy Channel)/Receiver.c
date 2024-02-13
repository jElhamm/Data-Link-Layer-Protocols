/**
  * This code snippet demonstrates a simple receiver function for a communication protocol,
  * likely related to some form of Automatic Repeat reQuest (ARQ) method. The receiver simulates the reception of frames,
  * checking for corruption based on an error probability, and sends acknowledgments for the received frames.
**/



#include <stdio.h>
#include <stdlib.h>
#include "Frame.h"


// Determine if the frame is corrupted based on the error probability
bool isCorrupted(double errorProb) {
    return ((double) rand() / RAND_MAX) < errorProb;
}

void receiver(double errorProb) {
    Frame receivedFrame;
    while (1) {
        receivedFrame.seqNum = rand() % 2;                                                       // Generate a random sequence number (0 or 1)
        if (isCorrupted(errorProb)) {
            printf("---> Received Frame with SeqNum: %d got corrupted\n", receivedFrame.seqNum);
        } else {
            printf("---> Received Frame with SeqNum: %d successfully received\n", receivedFrame.seqNum);
        }
        printf("---> Sending Acknowledgment for SeqNum: %d\n\n", receivedFrame.seqNum);          // Send acknowledgment for the received frame
        if (rand() % 10 == 0) {                                                                  // Break the loop randomly with a 10% probability
            break;
        }
    }
}