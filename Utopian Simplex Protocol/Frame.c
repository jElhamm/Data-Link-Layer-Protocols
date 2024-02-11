/**
  * The code defines functions for sending, receiving, and handling frames based on their type,
  * and implements a communication protocol named "utopianSimplexProtocol" which determines 
  * the actions to be taken based on the type of the frame.
  **/



#include <stdio.h>
#include "Frame.h"


void sendFrame(Frame frame) {
    if (frame.type==DATA) {
        printf("Sending DATA frame with data: %d\n", frame.data);
        // Send data frame implementation
    } else if (frame.type==ACK) {
        printf("Sending ACK frame\n");
        // Send ACK frame implementation
    } else {
        printf("Sending NACK frame\n");
        // Send NACK frame implementation
    }
}

void receiveFrame(Frame frame) {
    if (frame.type==DATA) {
        printf("Received DATA frame with data: %d\n", frame.data);
        // Process the received data frame
    } else if (frame.type == ACK) {
        printf("Received ACK frame\n");
        // Process the received ACK frame
    } else {
        printf("Received NACK frame\n");
        // Process the received NACK frame
    }
}
 