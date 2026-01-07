// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char ch;

//     // Open file in read mode
//     fp = fopen("file.txt", "r");

//     // Check if file opened successfully
//     if (fp == NULL) {
//         printf("Error: Cannot open file.\n");
//         return 1;
//     }

//     // Read file character by character (Sequential Access)
//     while ((ch = fgetc(fp)) != EOF) {
//         printf("%c", ch);
//     }

//     // Close the file
//     fclose(fp);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     int roll;
//     char name[20];
//     float marks;

//     fp = fopen("data.txt", "r");

//     if (fp == NULL) {
//         printf("File not found");
//         return 0;
//     }

//     fscanf(fp, "%d %s %f", &roll, name, &marks);

//     printf("Roll: %d\n", roll);
//     printf("Name: %s\n", name);
//     printf("Marks: %.2f\n", marks);

//     fclose(fp);
//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("File not found");
    } else {
        printf("File opened successfully");
        fclose(fp);
    }

    return 0;
}
