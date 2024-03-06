//Generate a random floating-point number between 0 and 1:
#include <stdio.h>
#include <stdlib.h>

int main() {
    float randomFloat = (float)rand() / RAND_MAX;
    printf("Random floating-point number between 0 and 1: %f\n", randomFloat);
    return 0;
}
