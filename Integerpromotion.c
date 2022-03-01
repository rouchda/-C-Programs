#include <stdio.h>
#include <stdint.h>

int main(void) {

    unsigned char a;
    a = 100*3;
    a = a / 3;
    printf("result: %i", a); //the result is 14 

    /* unsigned char a;
    a = 100*3 / 3;
    
    printf("result: %i", a); //the result is 100

    due to integer promotion, values smaller than int get promoted
    to signed int if possible otherwise to unsigned int.
    This makes use of ALU Properties and speeds up calculations */

    int16_t b = 32000;
    //b = b * 10 / 10; // the result is 32000
    b = b * 10;
    b = b / 10; // the result here is -768, because integer in my machine is longer than 16bit

    printf("result is:%i", b);


    return 0;

}