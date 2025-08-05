#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

    // print output using putchar, ignoring whitespace
    int str_len = strlen(input_str);
    int num_whitespace = 0;
    for (int i = 0; i < str_len; i++) {
        if (isspace(input_str[i])) {
            num_whitespace++;
        }
    }

    printf("there are a total of %d whitespace characters\n", num_whitespace);
}