#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[3][50];
    char course[3][50];

    // Open file in write mode
    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Get input from user
    printf("Enter the names and courses of 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);
        printf("Enter course of student %d: ", i + 1);
        scanf("%s", course[i]);
    }

    // Write data to file
    for (int i = 0; i < 3; i++) {
        fprintf(fp, "Name: %s, Course: %s\n", name[i], course[i]);
    }

    // Close the file
    fclose(fp);

    printf("Data written to file successfully!\n");

    return 0;
}