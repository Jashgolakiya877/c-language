#include <stdio.h>

void addArrays(int a[][100], int b[][100], int c[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printArray(int arr[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &columns);
    
    int arrayA[100][100], arrayB[100][100], arrayC[100][100];
    
    printf("\nEnter array A's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }
    
    printf("\nEnter array B's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }
    
    addArrays(arrayA, arrayB, arrayC, rows, columns);
    
    printf("\nArray C is:\n");
    printArray(arrayC, rows, columns);
    
    return 0;
}

