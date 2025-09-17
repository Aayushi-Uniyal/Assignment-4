#include <stdio.h>

#define SIZE 100

void interleave(int arr[], int n) {
    int first[SIZE], second[SIZE];
    int i, j = 0, k = 0;


    for (i = 0; i < n/2; i++)
        first[j++] = arr[i];
    for (i = n/2; i < n; i++)
        second[k++] = arr[i];

   
    i = 0; j = 0; k = 0;
    while (j < n/2 && k < n/2) {
        arr[i++] = first[j++];
        arr[i++] = second[k++];
    }
}

int main() {
    int arr[SIZE], n, i;

    printf("Enter number of elements (even): ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    interleave(arr, n);

    printf("Interleaved Queue: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
