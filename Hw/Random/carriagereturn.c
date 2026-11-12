#include <stdio.h>
#include <unistd.h> // Required for the sleep function

int main() {
    printf("Loading: [25%%]\r");
    fflush(stdout); // Forces the terminal to show the text immediately
    sleep(1);       // Waits 1 second

    printf("Loading: [50%%]\r");
    fflush(stdout);
    sleep(1);

    printf("Loading: [100%%]\n"); // Done! Moves to a new line
    return 0;
}
