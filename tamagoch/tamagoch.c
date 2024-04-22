#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include "tamagoch.h"
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

typedef enum error_t{
    FOPEN_ERR = -1,
}ERROR_T;


FILE* open_file(char* file_name) {
    FILE *fp;

    if ((fp = fopen(file_name, "w+")) == NULL) {
        fp = NULL;
    }
    return fp;
}


void write_in_file(char* path, char* message) {

    FILE *file = fopen(path, "a+");
    fputs(message ,file);
    fputs("\n" ,file);
    fclose(file);
}



char* read_first_line(char* path) {

    FILE *file = fopen(path, "r+");
    char* line;
    if (file == NULL) {
        return NULL;
    }

    if (fgets(line, MAX_LINE_LENGTH, file) == NULL) {
        fclose(file);
        return NULL;
    }

    // Удалить символ новой строки ('\n') в конце
    printf("%s", line);
    line[strcspn(line, "\n")] = '\0';
    fclose(file);
    return line;
}


void draw_tamagoch() {
    printf("\
       _______\n\
     /         \\ \n\
    |  0     0  | \n\
    |     >     |\n\
    |   \\___/   |\n\
     \\_________/\n\
           ");
}


void tamagoch_create() {
    
}




char* intToString(int num, int base) {
    static char buffer[33];
    char* ptr = &buffer[sizeof(buffer) - 1];
    int isNegative = 0;
    
    *ptr = '\0';
    
    if (num == 0) {
        *--ptr = '0';
    } else {
        if (num < 0 && base == 10) {
            isNegative = 1;
            num = -num;
        }
        
        while (num != 0) {
            int digit = num % base;
            *--ptr = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
            num /= base;
        }
        
        if (isNegative) {
            *--ptr = '-';
        }
    }

    
    return ptr;
}

void printAnimeGirl() {
    printf(" ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄\n");
    printf(" █▒▒░░░░░░░░░▒▒█\n");
    printf(" █░░█░░░░░█░░█░█\n");
    printf(" █░░░█▄██▄░░░░░█\n");
    printf(" ███░░░░░░░░░███\n");
    printf(" ███░▄▄▄█▄▄▄░███\n");
    printf(" ███▄█████████▄█\n");
    printf(" ████████████████\n");
    printf(" ███▀▀█▄▄▄▄█▀▀███\n");
    printf(" ██░░░░▀▀██░░░░██\n");
    printf(" █▀▀▀▀░░░░░░▀▀▀▀█\n");
    printf(" █░░░░░░░░░░░░░░█\n");
    printf(" █░░█████████░░░█\n");
    printf(" █░░░▀▄▄▄▄▄▀░░░░█\n");
}