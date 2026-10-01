#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "C String Library!";
    char result[100];

    strcat(str1, str2);
    strcpy(result, str1);
    strrev(result);
    strlen(result);
    strupr(result);

    printf("Result: %s\n Length: %lu\n", result, strlen(result));

    return 0;
}
