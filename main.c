#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "tamagoch/tamagoch.h"
#include "tamagoch/tamagoch.c"

#define MAX_LINE_LENGTH 1024
#define FILENAME "text.txt"


int main(void)
{
    int command;
    time_t now;
    char* reader = read_first_line(FILENAME);
    int time_now = time(&now);
    if (reader == NULL) {
        write_in_file(FILENAME, "tmgl");
        write_in_file(FILENAME, intToString(time_now, 10));
    }
    else {
        
        printf("%s","я ждала тебя хозяин\n");
        //printAnimeGirl();
    }
    


    /*scanf("d", &command);

    while(command != 0) {
        switch (command) {

            case 1:

        }



    }*/

    return 0;
}
