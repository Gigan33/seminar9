#include "merge.h"
#include "merge.h"

void merge(FILE *file1, FILE *file2) {
    char read1;
    char read2;

    int j = 1, k = 1;

    while (j == 1 || k == 1) {
        j = 0;
        k = 0;
        if ((read1 = fgetc(file1)) != EOF) {
            putchar(read1);
            while ((read1 = fgetc(file1)) != '\n') {
                putchar(read1);
            }
            j = 1;
        }
        if ((read2 = fgetc(file2)) != EOF) {
            putchar(read2);
            while ((read2 = fgetc(file2)) != '\n') {
                putchar(read2);
            }
            k = 1;
        }
    }
}