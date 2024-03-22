
// A  Program to find the square of each element of a given 1D array using a Pointer.

#include <stdio.h>
void squareFun(int *num, int size) {
    for (int i = 0; i < size; i++) {
        *num = (*num) * (*num);
        num++;
    }
}

int main() {
    int size, i;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
  
    squareFun(array, size);

    printf("Square of each element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
   return 0;
}
