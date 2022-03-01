#include <stdio.h>

int main(void) {

    union example {
        int i;
        float f;
    };

    union example value;

    value.i = 13; //we can change this to value.f
    printf("the stored value is: %i\n", value.i);

    return 0;
}