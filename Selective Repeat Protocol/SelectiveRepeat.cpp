/**
  * This code implements the execute method of the SelectiveRepeat class
  * The method simulates the behavior of the Selective Repeat protocol for data transmission in a network system.
 **/



#include "SelectiveRepeat.h"
#include <iostream>
#include <limits>
#include <algorithm>


void SelectiveRepeat::execute(vector<Frame>& frames, int windowSize) {
    int base = 0;
    while (base < frames.size()) {
        // Send all frames in the window
        for (int i = base; i < min(base + windowSize, static_cast<int>(frames.size())); i++) {
            cout << "---> Sending Frame with sequence number: " << frames[i].seqNum << endl;
        }
            
        // Simulate ACK reception
        int ackReceived;
        while (true) {
            cout << "---> Enter Acknowledgment Received (0 to " << frames.size() - 1 << "): ";
            if (cin >> ackReceived) {
                if (ackReceived >= 0 && ackReceived < frames.size()) {
                    break;
                }
                cout << "*** Invalid acknowledgment number. Please try again. ***" << endl;
            } else {
                cout << "*** Invalid input. Please enter a valid acknowledgment number. ***" << endl;
                cin.clear(); // Clear error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
        }

        // Handle acknowledgments
        for (int i = base; i <= ackReceived; i++) {
            frames[i].ack = true;
            cout << "---> Received ACK for Frame with sequence number: " << frames[i].seqNum << endl;
        }

        // Slide the window
        while (base < frames.size() && frames[base].ack) {
            base++;
        }
    }
}