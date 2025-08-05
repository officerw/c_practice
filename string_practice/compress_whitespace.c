#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LENGTH 100

int main(void) {
    // get input via getchar()
    char input_str[MAX_LENGTH];
    char curr_char;

    for (int i = 0; i < MAX_LENGTH; i++) {
        curr_char = getchar();

        // if we get a newline char, close out
        if (curr_char == '\n') {
            input_str[i] = '\0';
            break;
        }

        input_str[i] = curr_char;
    }

    // print output using putchar, ignoring consecutive 
    // whitespace
    int str_len = strlen(input_str);
    bool prev_is_space = false;
    bool is_space;
    for (int i = 0; i < str_len; i++) {
        curr_char = input_str[i];
        is_space = isspace(curr_char);

        // only putchar for spaces if the prev char is not a space
        if (is_space && !prev_is_space) {
            putchar(curr_char);
            // set prev_is_space flag
            prev_is_space = true;
        } else if (!is_space) {
            putchar(curr_char);
            prev_is_space = false;
        }
    }

    printf("\n");
}