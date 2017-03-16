











#include <stdio.h>

int main() {
	int a[] = {3, 1, 2, 5, 4};
	// for (int i = 1; i < 5; i++) {
	// 	for (int j = i; j <= 4; j++) {
	// 		if (a[i] < a[i-1]) {
	// 			int k   = a[i];
	// 			a[i]     = a[i-1];
	// 			a[i-1] = k;
	// 		}
	// 	}
	// }
	// for (int i = 0; i < 4; i++) {
	// 	for (int j = 0; j < 5; j++) {
	// 		if (a[i] > a[i+1]) {
	// 			int k   = a[i];
	// 			a[i]     = a[i+1];
	// 			a[i+1] = k;
	// 		}
	// 	}
	// }
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (a[i] > a[j]) {
				int k   = a[i];
				a[i]     = a[j];
				a[j] = k;
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}