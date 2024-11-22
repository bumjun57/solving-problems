#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b);

int main() {
    int num[3];
    while (1) {
        scanf("%d%d%d", &num[0], &num[1], &num[2]);
        if (num[0] == 0 && num[1] == 0 && num[2] == 0) break;

        qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
            
        if (num[0] + num[1] <= num[2]) printf("Invalid\n");
        else if (num[0] == num[1] && num[1] == num[2]) printf("Equilateral\n");
        else if (num[0] == num[1] || num[1] == num[2]) printf("Isosceles\n");
        else printf("Scalene\n");
    }
    return 0;
}
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}