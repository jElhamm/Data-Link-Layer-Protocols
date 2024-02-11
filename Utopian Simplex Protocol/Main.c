/**
  * 1. The code initializes three Frame structures: dataFrame (type DATA), ackFrame (type ACK), and nackFrame (type NACK).
  * 2. User inputs a data value for dataFrame.
  * 3. Calls utopianSimplexProtocol function with dataFrame, ackFrame, and nackFrame sequentially.
  **/



#include <stdio.h>
#include "Frame.h"


int main() {
    Frame dataFrame;
    dataFrame.type = DATA;
    printf("\n***********************************************************************");
    printf("--->Enter the data value for the DATA frame: ");
    scanf("%d", &dataFrame.data);
    Frame ackFrame = {ACK, 0};
    Frame nackFrame = {NACK, 0};
    utopianSimplexProtocol(dataFrame);
    utopianSimplexProtocol(ackFrame);
    utopianSimplexProtocol(nackFrame);
    printf("***********************************************************************\n");
    return 0;
}