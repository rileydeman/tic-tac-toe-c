#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#define PORT 6161
#define BOARD_SIZE 3

char board[BOARD_SIZE][BOARD_SIZE] = {{'1','2','3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void displayBoard() {}

// Create host
int startHost () {
    // Variables
    char mainLine[100] = "======================================================";
    char secondaryLine[100] = "------------------------------------------------------";
}