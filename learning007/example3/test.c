#include <stdio.h>

int main() {
    FILE *fp;
    char data[] = "Hello File Handling";
    char buffer[50];
    long position;

    // Open file in write + read mode
    fp = fopen("random.txt", "w+");

    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    // Write data to file using fwrite()
    fwrite(data, sizeof(char), sizeof(data), fp);

    // Get current file pointer position
    position = ftell(fp);
    printf("File pointer position after write: %ld\n", position);

    // Move file pointer to beginning
    rewind(fp);

    // Read data from file using fread()
    fread(buffer, sizeof(char), sizeof(data), fp);
    buffer[sizeof(data)] = '\0';

    printf("Data read from file: %s\n", buffer);

    // Move file pointer to 6th position using fseek()
    fseek(fp, 6, SEEK_SET);

    // Get new position
    position = ftell(fp);
    printf("File pointer position after fseek: %ld\n", position);

    fclose(fp);
    return 0;
}
