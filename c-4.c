#include <stdio.h>

// Define structure representing a car
struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int N;

    printf("Enter the number of cars: ");
    scanf("%d", &N);

    // Declare an array of Car objects
    struct Car cars[N];

    // Input details of each car
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        printf("Enter model: ");
        scanf("%s", cars[i].model);
        printf("Enter year: ");
        scanf("%d", &cars[i].year);
        printf("Enter price: ");
        scanf("%f", &cars[i].price);
    }

    // Display details of each car
    printf("\nDetails of cars:\n");
    for (int i = 0; i < N; i++) {
        printf("Car %d:\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("\n");
    }

    return 0;
}