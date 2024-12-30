#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int linearResult = linearSearch(arr, n, x);
    if (linearResult != -1) {
        printf("Tim kiem tuyen tinh: Phan tu %d duoc tim thay tai vi tri %d\n", x, linearResult);
    } else {
        printf("Tim kiem tuyen tinh: Phan tu %d khong ton tai trong mang\n", x);
    }
    int binaryResult = binarySearch(arr, 0, n - 1, x);
    if (binaryResult != -1) {
        printf("Tim kiem nhi phan: Phan tu %d duoc tim thay tai vi tri %d\n", x, binaryResult);
    } else {
        printf("Tim kiem nhi phan: Phan tu %d khong ton tai trong mang\n", x);
    }
    return 0;
}
