#include<stdio.h>
int main() {
	int n, m; int arr[201][101], res[101][101];
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= 2*n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			res[i][j] = arr[i][j] + arr[i + n][j];
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}