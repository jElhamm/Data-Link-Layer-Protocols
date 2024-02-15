// This code defines a class 'GoBackN' that represents the Go-Back-N protocol.



#ifndef GOBACKN_H
#define GOBACKN_H


class GoBackN {
private:
    int WINDOW_SIZE;
    int frame_to_send;
    int next_frame_to_send;
    int frame_expected;

public:
    GoBackN(int window_size);
};

#endif