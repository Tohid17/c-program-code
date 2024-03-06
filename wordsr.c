//Generate a random sentence from predefined words:
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *subjects[] = {"The", "A", "One", "Some"};
    const char *verbs[] = {"dog", "cat", "bird", "fish"};
    const char *actions[] = {"jumps", "runs", "flies", "swims"};

    printf("%s %s %s.\n", subjects[rand() % 4], verbs[rand() % 4], actions[rand() % 4]);
    return 0;
}
