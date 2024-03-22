#include <stdio.h>

int main() {
  int numbers[10];
  int largest, i;

  // Get input for the 10 elements of the array
  printf("Enter 10 numbers: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &numbers[i]);
  }

  // Find the largest element
  largest = numbers[0];
  for (i = 1; i < 10; i++) {
    if (numbers[i] > largest) {
      largest = numbers[i];
    }
  }

  // Print the largest element
  printf("The largest number is: %d\n", largest);
   return 0;
}
