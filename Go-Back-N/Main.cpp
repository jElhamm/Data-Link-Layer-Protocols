/**
  * This code includes the "GoBackN.h" header file, defines the main() function,
  * prompts the user to enter a window size, creates an instance of the GoBackN class with the specified window size,
  * and then simulates the sender and receiver sides of the Go-Back-N protocol.
 **/



#include "GoBackN.h"
using namespace std;


int main() {
    int window_size;
    cout << "\n******************************************************************\n";
    cout << "---> Enter the window size: ";
    cin >> window_size;
    GoBackN gb(window_size);
    cout << "---> Sender side:\n";
    gb.sender();
    cout << "---> \nReceiver side:\n";
    gb.receiver();
    return 0;
    cout << "\n******************************************************************\n";
}