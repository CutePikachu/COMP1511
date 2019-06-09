#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N_ROWS 12
#define N_COLUMNS 15


int isSubstring(char *substring, char *string) {
    if (strlen(substring) > strlen(string)) {
        return 0;
    }
    char *str = string;
    int i = 0;
    while (i < (strlen(string) - strlen(substring) + 1)) {
        if (strncmp(str, substring, strlen(substring) - 1) == 0) {
            return 1;
        }
        i++;
        str = &string[i];
    }
    return 0;

}

int main(int argc, char *argv[]){
    char str1[1000] = {0};
    char str2[1000] = {0};
    fgets(str1, 1000, stdin);
    fgets(str2, 1000, stdin);
    int i = isSubstring(str2, str1);
    printf("%d\n", i);
    return 0;
}
/*
int myStrCmp(char *string1, char *string2) {
    if (strlen(string1) != strlen(string2)) {
        return 0;
    }
    int i = 0;
    while (i < strlen(string1)) {
        if (string1[i] != string2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}


int main(int argc, char *argv[]){
    char str1[1000] = {0};
    char str2[1000] = {0};
    fgets(str1, 1000, stdin);
    fgets(str2, 1000, stdin);
    int i = myStrCmp(str1, str2);
    printf("%d\n", i);
    return 0;
}
*/
/*
int beginsWith(char *string1, char *string2) {
    if (strncmp(string1, string2, strlen(string2) - 1) == 0) {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    char str1[1000] = {0};
    char str2[1000] = {0};
    fgets(str1, 1000, stdin);
    fgets(str2, 1000, stdin);
    int i = beginsWith(str1, str2);
    printf("%d\n", i);


    return 0;
}
*/
/*
int main(int argc, char *argv[]) {
    char str[1024] = {0};
    
    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        perror("data.txt");
        return 1;
    }
    if (fgets(str, 1000, stdin) != NULL) {
        fputs(str, fp);
    }
    fclose(fp);
    return 0;
}
*/
/*
#define N 10
int main(void) {
    char str[10] = {0};
    char line[] = {'H', 'i', ' ', 'S', 'y', 'd', 'n', 'e', 'y' , '\n', '\0' , 'p', '1', '-', 'c'};
    printf("%d\n", strlen(line));
    str[0] = 'H';
    str[1] = 'i';
    printf("%s\n", str);
    return 0;
}
*/
/*
int main(void) {
    int digit_count[N] = {0};
    int x, last_digit;

    while (scanf("%d", &x) == 1) {
        last_digit = x % N;
        digit_count[last_digit] = digit_count[last_digit] + 1;
    }
    last_digit = 0;
    while (last_digit < N) {
        printf("%d numbers with last digit %d read\n", digit_count[last_digit], last_digit);
        last_digit = last_digit + 1;
    }

    return 0;
}
*/
/*
int main(void) {
    int matrix[N_ROWS][N_COLUMNS];
    
    int j = 0;
    int i = 0;
    
    while (i < N_ROWS) {
        j = 0;
        while (j < N_COLUMNS) {
            matrix[i][j] = i * j;
            j++;
        }
    
        i++;
    }
    i = 0;
    while (i < N_ROWS) {
        j = 0;
        int sum = 0;
        while (j < N_COLUMNS) {
            sum += matrix[i][j];
            printf("%d\t", matrix[i][j]);
            j++;
        }
        printf("|%d", sum);
        printf("\n");
        i++;
    }
    i = 0;
    j = 0;
    printf("---------------------------------------------------------------");
    printf("----------------------------------------------------------\n");
    while (j < N_COLUMNS) {
        i = 0;
        int sum = 0;
        while (i < N_ROWS) {
            sum += matrix[i][j];
            i++;
        }
        printf("%d\t", sum);
        j++;
    }
    printf("\n");
    return 0;
}
*/
/*
int main() {
    int count_space = 0;
    int cha = getchar();
    int count_word = 0;
    int shortest = 0;
    int longest = 0;
    int word_len = 0;
    while (cha != EOF) {

        if (isspace(cha)) {
            count_space++;
            count_word++;
            if (shortest == 0) {
                shortest = word_len;
            } else if (shortest > word_len) {
                shortest = word_len;
            } else if(longest < word_len) {
                longest = word_len;
            }
            word_len = 0; 
        } else {
            word_len++;
        }
        cha = getchar();
    }
    printf("Input contains %d blanks, tabs and new lines\n", count_space);
    printf("Number of words: %d\n", count_word);
    printf("Length of shortest word: %d\n", shortest);
    printf("Length of longest word: %d\n", longest);
    return 0;
}
*/
