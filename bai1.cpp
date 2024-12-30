#include<stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

void printResult(int index, int x) {
    if (index != -1) printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, index);
    else printf("Phan tu %d khong ton tai trong mang\n", x);
}

int main() {
    int arr[] = {23, 1, 23123, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = linearSearch(arr, n, x);
    printResult(result, x);
    return 0;
}
