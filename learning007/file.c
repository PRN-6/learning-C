#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int age;
    char line[50];
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    // 1. fscanf() → formatted input
    fscanf(fp, "%s %d", name, &age);
    fgetc(fp);   // 🔹 clear leftover newline

    printf("Using fscanf():\n");
    printf("Name = %s, Age = %d\n\n", name, age);

    // 2. fgets() → read a full line
    fgets(line, sizeof(line), fp);
    printf("Using fgets():\n");
    printf("%s\n", line);

    // 3. fgetc() → read single character
    ch = fgetc(fp);
    printf("Using fgetc():\n");
    printf("Character = %c\n", ch);

    fclose(fp);
    return 0;
}
