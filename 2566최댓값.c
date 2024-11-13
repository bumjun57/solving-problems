	#include<stdio.h>
	int main() {
		int arr[9][9]; int row = 1, col = 1, max = 0;
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				scanf("%d", &arr[i][j]);
				if (max < arr[i][j]) {
					max = arr[i][j];
					row = i + 1;
					col = j + 1;
				}
			}
		}
		printf("%d\n%d %d", max, row, col);
		return 0;
	}