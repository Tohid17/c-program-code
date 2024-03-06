//Generate a random color in RGB format:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int red = rand() % 256;
    int green = rand() % 256;
    int blue = rand() % 256;
    printf("Random color (RGB): (%d, %d, %d)\n", red, green, blue);
    return 0;
}
