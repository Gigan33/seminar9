#include <stdio.h>
#include "merge.h"

int main(int argc, char **argv) {
    puts("\n\nTask2\n");

    FILE *file1;
    file1 = fopen(argv[1], "r");
    FILE *file2;
    file2 = fopen(argv[2], "r");

    if (file1 == NULL || file2 == NULL)
        puts("No such file");
    else {
        merge(file1, file2);

        fclose(file1);
        fclose(file2);
    }

    return 0;
}
