// This code the transmission and reception of a message using a hypothetical communication protocol called "Simplex Stop-and-Wait Protocol". 



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Sender.c"
#include "Receiver.c"


int main() {
    srand(time(0));                 // Seed for random values
    char message[1000];             // Assuming message size not exceeding 1000 characters
    double errorProb; 
    printf("\n******************************************************************************\n");
    printf("---> Enter the message to transmit: ");
    scanf("%[^\n]s", message);
    printf("---> Enter the error probability (0 to 1): ");
    scanf("%lf", &errorProb);
    printf("/n---> Sender transmitting the message:\n");
    sender(message, strlen(message), errorProb);
    printf("\n---> Receiver receiving the message:\n");
    receiver(errorProb);
    printf("******************************************************************************\n");
    return 0;
}