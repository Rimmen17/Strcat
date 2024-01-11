#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hello";
    char string2[] = " World";
    char result[50]; // Make sure the result buffer is large enough to hold the concatenated string

    strcpy(result, string1); // Copy the first string into the result buffer
    strcat(result, string2); // Concatenate the second string onto the result buffer

    printf("%s\n", result);

    return 0;
}