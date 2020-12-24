#include <stdio.h>

void swap(int *num1, int *num2);
void sort(int *arr, int length);

int main() {
    int Array[10] = {1, 4, 2, 9, 7, 10, 3, 6, 8, 5};
    int Length = sizeof(Array) / sizeof(int);

    sort(Array, Length);

    for (int i = 0; i < Length; i++)
        printf("%d ", Array[i]);
}

void swap(int *num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void sort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length; j++)
            printf("%d ", arr[j]);

        printf("\n");

        for (int j = 0; j < length - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    }
}
