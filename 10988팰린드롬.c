#include<stdio.h>
#include<string.h>
int main() {
	char str[101];
	int res = 1;
	scanf("%s", str);
	for (int i = 0; i < strlen(str)/2; i++) {
		if (str[i] == str[strlen(str) - 1 - i]) {
			res *= 1;
		}
		else res *= 0;
	}
	printf("%d", res);
}