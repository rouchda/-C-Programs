#include <stdio.h>

int main(void) {

    enum Oranges { VALENCIA, NAVEL, BLOOD};
    enum Oranges an_orange = NAVEL;// we replace cases 0, 1, 2 with the enumerations above and it fuctions the same way and is more comprehensive

    int an_orange;// if 2 is assigned here, case 2 will be the output
                  
    switch(an_orange) {
        case 0://Valencia
        printf("Valencia oranges are ok\n");
        break;
        case 1://Navel
        printf("Mmmmh, schön bitter!\n");
        break;
        case 2://Blood
        printf("i loveblood oranges\n");
        break;

    }
    return 0;
}