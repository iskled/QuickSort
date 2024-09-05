#include <stdlib.h>
#include <stdio.h>

void add(int a, int b, int * c); //Add function prototype

int main() {

	int num1, num2, num3;

	printf("Enter first integer");
	scanf_s("%d", &num1);
	printf("Enter second integer");
	scanf_s("%d", &num2);

	add(num1, num2, &num3);

	printf("Result = %d", num3);
}

void add(int a, int b, int* c) {
	*c = a + b;
}






























//#include <stdio.h>
//#include <stdlib.h>
//
//// Comparator function for integers
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//
//
////Main start from here
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // Sorting the array using qsort
//    qsort(arr, n, sizeof(int), compare);
//
//    // Printing the sorted array
//    printf("Sorted array: \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
