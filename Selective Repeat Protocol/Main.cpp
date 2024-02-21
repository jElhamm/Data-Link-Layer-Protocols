/**
  * This code snippet in main.cpp essentially orchestrates the transmission and acknowledgment
  * of frames using the Selective Repeat protocol by interacting with the classes Frame and SelectiveRepeat.
 **/



#include <iostream>
#include "Frame.h"
#include "SelectiveRepeat.h"
#include <vector>
using namespace std;


int main() {
    int n;
    cout << "**************************************************************";
    cout << "---> Enter the number of frames: ";
    cin >> n;
    vector<Frame> frames;
    for (int i = 0; i < n; i++) {
        int seqNum = i;
        string data;
        cout << "---> Enter data for frame " << seqNum << ": ";
        cin >> data;
        frames.emplace_back(Frame(seqNum, data));
    }
    int windowSize;
    cout << "---> Enter the window size: ";
    cin >> windowSize;
    SelectiveRepeat::execute(frames, windowSize);
    return 0;
    cout << "**************************************************************";s
}