#include <stdio.h>
#include "tail.h"
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL, "Russian");
    puts("Введите количество строк");

    int number_of_strings;
    if (scanf("%d", &number_of_strings)) {
        if (number_of_strings > 0) {

        } else {
            puts("Ошбка, количество строк приравняется к 5");
            number_of_strings = 5;
        }
    } else {
        puts("Ошбка, количество строк приравняется к 5");
        number_of_strings = 5;
    }

    FILE *file;
    file = fopen(argv[1], "r");

    if (file == NULL)
        puts("Такого файла нет");
    else {
        tail(file, number_of_strings);
        fclose(file);
    }
}
