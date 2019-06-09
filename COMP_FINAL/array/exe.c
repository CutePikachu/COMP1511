#include <stdio.h>

int main(int argc, char *argv[]) {
    int array[1024] = {0};
    int i = 0;
    while ((scanf("%d", &array[i])) == 1) {
        if (i > 0) {
            if (array[i] < 0 || array[i] > 1000 || array[i] >= array[i - 1]) {
                printf("NOT GOOD\n");
            }
        }
        i++;
        
    }
    printf("%d numbers read. Median was%d\n", i, array[i/2]);
    return 0;
}

int remove_char(char str[], char c) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            while (str[i] != '\0'){
                str[i] = str[i + 1];
                i++;
            }
            return 1;
        }
        i++;
    }
    return 0;
}
