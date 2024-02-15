/**
  * The GoBackN class is defined, which includes the constructor to initialize the window size,
  * variables for tracking frames to send and frames expected, and functions for sender and receiver operations.
  **/



#include "GoBackN.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int MAX_SEQUENCE_NUM = 7;

// Constructor for GoBackN class
GoBackN::GoBackN(int window_size) {
    WINDOW_SIZE = window_size;
    frame_to_send = 0;
    next_frame_to_send = 0;
    frame_expected = 0;
}

// Sender function for Go-Back-N algorithm
void GoBackN::sender() {
    while (frame_to_send < MAX_SEQUENCE_NUM) {
        while (next_frame_to_send < frame_to_send + WINDOW_SIZE && next_frame_to_send < MAX_SEQUENCE_NUM) {
            cout << "Sending frame " << next_frame_to_send << endl;
            next_frame_to_send++;
        }

        cout << "---> Enter acknowledgment received: ";
        int ack_received;
        cin >> ack_received;

        if (ack_received >= frame_to_send) {
            frame_to_send = ack_received + 1;
        } else {
            cout << "** Incorrect acknowledgment received. Resending frames. ***\n";
            next_frame_to_send = frame_to_send;
        }
    }

    cout << "*** Sender: All frames sent successfully ***\n";
}

// Receiver function for Go-Back-N algorithm
void GoBackN::receiver() {
    while (frame_expected < MAX_SEQUENCE_NUM) {
        cout << "Waiting for frame " << frame_expected << "...\n";

        bool frame_arrives = rand() % 2;

        if (frame_arrives) {
            cout << "Frame " << frame_expected << " received\n";
            cout << "Sending acknowledgment: " << frame_expected << endl;
            frame_expected++;
        } else {
            cout << "*** Timeout occurred, requesting retransmission ***\n";
        }
    }

    cout << "*** Receiver: All frames received successfully ***\n";
}