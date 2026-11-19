#include <stdio.h>

int find_ceil(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;        // possible answer, look for an earlier one on the left
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main(void) {
    int n, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    printf("%d\n", find_ceil(arr, n, x));

    return 0;
}