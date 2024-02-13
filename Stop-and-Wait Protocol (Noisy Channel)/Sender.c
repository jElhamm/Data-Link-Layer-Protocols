// This code snippet implements a basic sender function for a communication system that sends data in frames. 



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Frame.h"


// Determine if the frame is corrupted based on the error probability
bool isCorrupted(double errorProb) {
    return ((double) rand() / RAND_MAX) < errorProb;
}

// Function to send a frame over a noisy channel
void sendFrame(Frame frame, double errorProb) {
    printf("Sending Frame with SeqNum: %d\n", frame.seqNum);
    
    if (isCorrupted(errorProb)) {
        printf("Frame with SeqNum: %d got corrupted\n", frame.seqNum);
    } else {
        printf("Frame with SeqNum: %d successfully received\n", frame.seqNum);
    }
}

void sender(char message[], int messageSize, double errorProb) {
    int nextSeqNum = 0;
    Frame sendingFrame;
    for (int i = 0; i < messageSize; i += FRAME_SIZE) {
        strncpy(sendingFrame.data, message + i, FRAME_SIZE);            // Copy a portion of the message to the frame's data field
        sendingFrame.seqNum = nextSeqNum;                               // Assign the sequence number to the frame
        sendFrame(sendingFrame, errorProb);                      // Call the sendFrame function to send the frame
        nextSeqNum = nextSeqNum == 0 ? 1 : 0;                           // Update the next sequence number
    }
}




/**
  * The 'sender' function takes a message, breaks it into frames, assigns sequence numbers to each frame,
  * and 'sends' these frames using the sendFrame function. The sender alternates between sequence numbers 0 and 1 for each frame.
**/