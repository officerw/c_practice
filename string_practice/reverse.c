#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// reverse a string without allocating any
// additional memory for a temporary string
const char* reverse(char str[]) {
    int str_len = strlen(str);
    
    // check for empty string
    if (!str_len) {
        return str;
    }

    // use two pointers to swap characters
    // in the string
    int start = 0;
    int end = str_len - 1;
    while (start < end) {
        char temp = str[end];
        str[end] = str[start];
        str[start] = temp;

        // increment start and decrement end
        // indices
        start++;
        end--;
    }

    return str;
}

int main(void) {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World";
    char str3[] = "H";
    char str4[] = "";
    
    printf("my first reversed string is %s\n", reverse(str1));
    printf("my second reversed string is %s\n", reverse(str2));
    printf("my third reversed string is %s\n", reverse(str3));
    printf("my fourth reversed string is %s\n", reverse(str4));
}