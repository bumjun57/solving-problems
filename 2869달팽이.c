#include<stdio.h>
int main() {
	int a, b, v;
	scanf("%d%d%d", &a, &b, &v);
	printf("%d", (v - b + (a - b) - 1) / (a - b));
}