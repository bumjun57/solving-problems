#include<stdio.h>
#include<string.h>

int main() {
	char alp[1000001]; int alpnum[26] = { 0 };
	scanf("%s", alp);
	for (int i = 0; alp[i] != '\0'; i++) {
		if (alp[i] <= 122 && alp[i] >= 97) {
			alp[i] = alp[i] - 32;
		}
		alpnum[alp[i] - 65]++;
	}
	int maxCount = 0; char save;
	for (int i = 0; i < 26; i++) {
		if (alpnum[i] > maxCount) {
			maxCount = alpnum[i];
			save = i + 'A';
		}
		else if (alpnum[i] == maxCount)
			save = '?';
	}
	printf("%c", save);

	return 0;
}