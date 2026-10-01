#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    FILE *fp2 = fopen("output.txt", "r");
    char line[200];
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Hello, C File Writer!\n");
    fprintf(fp, "This file was created using C.\n");
    fprintf(fp, "Student Name: Amey\n");
    fprintf(fp, "Course: C Programming\n");

    if (fclose(fp) != 0) {
        perror("Error closing file");
        return 1;
    }
    fgets(line, 200, fp2); // Read a line from the file into the buffer
    fclose(fp2); // Close the file after reading
    printf("Read from file: %s", line);


    printf("File written successfully.\n");
    return 0;
}
