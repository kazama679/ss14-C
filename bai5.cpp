#include<stdio.h>

void insertionSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int x = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>x){
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = x;
	}
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {23,1,23123,11,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printArr(arr, n);
	return 0;
}

