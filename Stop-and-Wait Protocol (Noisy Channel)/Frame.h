/**
  * It includes a structure `Frame` that represents a frame with two fields: 
  * an integer `seqNum` for the sequence number and an array `data` of characters with a maximum size defined by `FRAME_SIZE`.
  * This header file serves to declare the structure and its associated constants.
  **/



#ifndef FRAME_H
#define FRAME_H
#define FRAME_SIZE 100


typedef struct Frame {
    int seqNum;
    char data[FRAME_SIZE];
} Frame;

#endif