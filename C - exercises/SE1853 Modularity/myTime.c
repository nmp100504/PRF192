#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayCurrentDatetime() {
    time_t current_time;
    char* c_time_string;

    /* Get the current time */
    current_time = time(NULL);

    /* Convert it to a string */
    c_time_string = ctime(&current_time);

    /* Print the time */
    printf("Current time is: %s", c_time_string);

}

