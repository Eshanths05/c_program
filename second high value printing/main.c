#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 6;
	int *arr = (int *)malloc(N * sizeof(int));

	int readings[] = {12, 7, 15, 7, 20, 12};


	for (int i = 0; i < N; i++) {
		arr[i] = readings[i];
	}

	int max = -1, secondMax = -1;

	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			if (arr[i] != max) {
				secondMax = max;
			}
			max = arr[i];
		} else if (arr[i] > secondMax && arr[i] < max) {
			secondMax = arr[i];
		}
	}

	if (secondMax == -1) {
		printf("Second highest distinct value does not exist\n");
	} else {
		printf("Second highest distinct value = %d\n", secondMax);
	}

	free(arr);
	return 0;
}

