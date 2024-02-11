/**
  * This code represents a header file.
  * It includes definitions for a frame structure that contains a type (DATA, ACK, or NACK) and a data field.
  * Additionally, it declares functions for sending a frame, receiving a frame, and implementing a communication protocol
  * called "utopianSimplexProtocol" based on the frame type.
  **/



#ifndef FRAME_H
#define FRAME_H


typedef enum {
    DATA,
    ACK,
    NACK
} FrameType;

typedef struct {
    FrameType type;
    int data;
} Frame;

void sendFrame(Frame frame);
void receiveFrame(Frame frame);
void utopianSimplexProtocol(Frame frame);

#endif



/**
  * In the 'sendFrame' function, based on the type of the frame (DATA, ACK, NACK),
  * appropriate messages are printed indicating the frame being sent, and respective implementations are executed.

  * In the 'receiveFrame' function, similar to sendFrame, based on the type of the frame received,
  * corresponding messages are printed indicating the frame received, and the appropriate processing is performed.

  * The 'utopianSimplexProtocol' function is the core of the protocol.
  * If the frame type is DATA, both sending and receiving functions are called. If the frame type is ACK, only the send operation is performed.
  * If the frame type is NACK, the frame is resent, a message is printed,and the frame is sent and received again in response to NACK.
  **/