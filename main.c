#include <stdio.h>
#include <stdlib.h>

// Variables
char line[100] = "===============================================";

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

// Main function
int main() {
    printf("TIC TAC TOE\n");
    printf("\nMade by rileydeman\n");

    printf("\n> Do you want to restart the program? (y/n) \n> ");
    char answer;
    scanf(" %c", &answer);
    if (answer == 'y') {
        cleanTerminal();
        main();
    }
}