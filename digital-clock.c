#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour = 0, minute = 0, second = 0;

    while (1) {
        // Clear screen
        system("clear");

        // Print time with leading zeros
        printf("%02d:%02d:%02d", hour, minute, second);
        fflush(stdout);

        // Increment second
        second++;

        // Update minute and reset second if necessary
        if (second == 60) {
            minute++;
            second = 0;
        }

        // Update hour and reset minute if necessary
        if (minute == 60) {
            hour++;
            minute = 0;
        }

        // Reset hour if necessary
        if (hour == 24) {
            hour = 0;
        }

        // Delay for one second
        sleep(1);
    }

    return 0;
}
