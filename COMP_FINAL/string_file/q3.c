#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int num;
    printf("Enter side length: ");
    scanf("%d", &num);
    int height = 2 *num - 1;
    int width = height;
    
    int i = 0;
    int j = 0;
    while (i < height) {
        j = 0;
        while (j < width) {
            if (i + j == num - 1 || abs(i - j) == num - 1 || j + i == num * 3 - 3) {
                printf("*");
            }
             else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
