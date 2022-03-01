#include <stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};

int main(void) {

    struct Time now = { .hour=9, .minute=50, .second=13 }; // with . it is a designated initializer, we can replca the = with :

    printf("The time is: %i:%i:%i\n", now.hour, now.minute, now.second);

    return 0;
}