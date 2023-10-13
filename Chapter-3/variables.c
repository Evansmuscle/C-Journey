#include <stdio.h>

int main(void) {
    int a;
    short int b;
    long int c;
    unsigned int d;
    char e;
    float f;
    double g;
    signed long long int y;
    signed short int z;
    
    printf("Size of an int: %lu\n", sizeof a);
    printf("Size of a short: %lu\n", sizeof b);
    printf("Size of a long: %lu\n", sizeof c);
    printf("Size of an unsigned: %lu\n", sizeof d);
    printf("Size of a char: %lu\n", sizeof e);
    printf("Size of a float: %lu\n", sizeof f);
    printf("Size of a double: %lu\n", sizeof g);
    printf("Size of a signed long long int: %lu\n", sizeof y);
    printf("Size of a signed short int: %lu\n", sizeof z);
    
    printf("Memory address of variable 'a': %p\n", (void *)&a);
    
    return 0;
}