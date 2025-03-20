#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "core/host.c"

// Variables
char mainLine[100] = "======================================================";
char secondaryLine[100] = "------------------------------------------------------";

// Clean terminal function
void cleanTerminal() {

#ifdef _WIN32
    system("cls");
#elif __linux__
    system("clear");
#elif __APPLE__
    system("clear");
#elif __unix__
    system("clear");
#elif __FreeBSD__
    system("clear");
#elif __ANDROID__
    system("clear");
#else
    printf("Cannot clear console: Unknown OS\n");
#endif

}

// Setup Game function
void setupGame() {
    printf("\nDo you want to host or join the server? ['h' = host, 'j' = join]\n> ");
    char mode;
    scanf("%c", &mode);

    if (mode == 'h') {
        // printf("Host Game\n");
        startHost();
    } else if (mode == 'j') {
        printf("Join Game\n");
    } else {
        while (getchar() != '\n' && getchar() != EOF);
        printf("\n%s\n", secondaryLine);
        setupGame();
    }
}

// Main function
int main() {
    // Start-up info
    printf("TIC TAC TOE\n");
    printf("A multiplayer game over the internet\n");
    printf("\nMade by rileydeman\n");
    printf("\n%s\n", mainLine);

    // Program
    setupGame();


    // Program restarter
    while (getchar() != '\n' && getchar() != EOF);
    printf("\n> Do you want to restart the program? (y/n) \n> ");
    char answer;
    scanf(" %c", &answer);
    if (answer == 'y') {
        while (getchar() != '\n' && getchar() != EOF);
        cleanTerminal();
        main();
    }
}