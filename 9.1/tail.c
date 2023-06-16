#include "tail.h"

void tail(FILE *file, int number_of_strings) {
    char c;
    int all_strings = 0;

    while ((c = fgetc(file))!= EOF) {
        if (c == '\n')
            all_strings++;
    }

    rewind(file);

    int i = 0;
    while (i < all_strings - number_of_strings + 1) {
        c = fgetc(file);
        if (c == '\n')
            i += 1;
    }
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
}
