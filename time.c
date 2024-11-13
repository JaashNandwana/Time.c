#include <stdio.h>
#include <time.h>

int main() {
    // Declare a variable to hold the time
    time_t current_time;

    // Get the current time
    time(&current_time);

    // Convert it to local time and print it in a readable format
    struct tm *local_time = localtime(&current_time);

    // Display time in HH:MM:SS format
    printf("Current Time: %02d:%02d:%02d\n",
           local_time->tm_hour,
           local_time->tm_min,
           local_time->tm_sec);

    return 0;
}

