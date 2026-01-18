#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in write mode
    fp = fopen("output.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    // Writing formatted data using fprintf()
    fprintf(fp, "Name: %s\n", "john");
    fprintf(fp, "Age: %d\n", 21);

    // Writing a string using fputs()
    fputs("Course: Computer Science\n", fp);
    fputs("File writing using fputs()\n", fp);

    // Close the file
    fclose(fp);

    printf("Data written to file successfully\n");

    return 0;
}
