// Q8. Implement a C program based on integer array. Implement method to find average, sum, min element, max element.

#include <stdio.h>
int main()
{
	int size;
	int arr[100];
	int a, i, min_element, max_element;
	float avg;
	int sum = 0;
	printf("Enter size of array:");
	scanf("%d\n", &size);
	printf("Enter the values of array");

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}

	avg = (sum / size);
	printf("%d %f", sum, avg);

	return 0;
}
