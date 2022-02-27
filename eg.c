//Eg what is the output
int i = 3;
int main(void) {
    int i = 10;
    {
        int j = i;
        int i = 5;
        printf ("i = %d, j = %d, ", i, j);
    }
    printf("i = %i\n",i);
} // output is i = 5, j = 10, i = 10