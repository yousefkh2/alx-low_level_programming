#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int sum = 0;

    // Check for no numbers passed
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    // Iterate through the arguments, validate and add them
    for (int i = 1; i < argc; i++) {
        if (is_valid_number(argv[i])) {
            sum += atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
