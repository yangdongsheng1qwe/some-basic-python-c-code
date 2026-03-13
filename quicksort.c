#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//交换
void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
//void quicksort(int* arr, int left,int right) {
//	if (left >= right)
//		return;
//	int i = left, j = right;
//	int key = arr[i];
//	while (i < j) {
//		while (i < j && arr[j] >= key)
//			j--;
//		while (i < j && arr[i] <= key)
//			i++;
//		if (i < j)
//			swap(&arr[i], &arr[j]);
//	}
//	swap(&arr[left], &arr[i]);
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
void quicksort(int* arr, int left, int right) {
	while (left < right) {
		int pivot_idx = left + rand() % (right - left + 1);
		swap(&arr[left], &arr[pivot_idx]);
		int pivot = arr[left];
		int i = left - 1;
		int j = right + 1;
		while (1) {
			do { i++ } while (arr[i] < pivot);
			do { j-- } while (arr[j] > pivot);
			if (i >= j)break;
			swap(&arr[i], &arr[j]);
		}
		if (j - left < right - j) {
			quicksort(arr, left, j);
			left = j + 1;
		}
		else {
			quicksort(arr, j + 1, right);
			right = j;
		}
	}
}
int main() {
	
	printf("请输入数组长度\n");
	int n;
	scanf_s("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}