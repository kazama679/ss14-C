#include<stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void printResult(int index, int x) {
    if (index != -1) printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, index);
    else printf("phan tu %d k ton tai", x);
}

int main() {
    int arr[] = {1, 4, 11, 23, 23123};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = binarySearch(arr, 0, n - 1, x);
    printResult(result, x);
    return 0;
}
