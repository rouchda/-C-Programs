#include <stdio.h>

int main(void) {

unsigned int x = 1;
int y = -1;
if(y < x)
printf("of course it is");
else
printf("strange");

}
/*the output is strange because when we have an unsigned and signed integer,
the signed integer is converted into the unsigned and the operation is carried out*/