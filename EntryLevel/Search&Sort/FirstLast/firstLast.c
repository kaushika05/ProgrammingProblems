#include <stdio.h>

int binarySearchLeft(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}

int binarySearchRight(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) left = mid + 1;
        else right = mid - 1;
    }
    return right;
}

void findFirstLast(int arr[], int n, int target) {
    int left = binarySearchLeft(arr, n, target);
    int right = binarySearchRight(arr, n, target);

    if (left <= right)
        printf("[%d, %d]\n", left, right);
    else
        printf("[-1, -1]\n");
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    findFirstLast(arr, n, target);
    return 0;
}
