#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#define PORT 6161

// Create host
int startHost () {
    WSADATA wsa;
    WSAStartup(MAKEWORD(2,2), &wsa);

    // Variables
    char mainLine[100] = "======================================================";
    char secondaryLine[100] = "------------------------------------------------------";
    int serverFd, newSocket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    printf("\n%s\n", secondaryLine);
    printf("\nSERVER: host will be set up\n");

    // Create socket
    serverFd = socket(AF_INET, SOCK_STREAM, 0);
    if (serverFd == 0) {
        perror("\nERROR: Socket creation failed\n");
        exit(EXIT_FAILURE);
    }

    // Bind socket to IP & Port
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    bind(serverFd, (struct sockaddr*)&address, sizeof(address));
}