#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("files not found\n");
        return 1;
    }
    
    FILE *stream = fopen(argv[1], "r");
    char a[10000] = {0};
    if (stream == NULL) {
        perror(argv[1]);
    }
    int word_count = 0;
    int line_count = 0;
    int cha_count = 0;
    while (fgets(a, 10000, stream) != NULL) {
        int i = 0;
        while (a[i] != '\0') {
            if (isspace(a[i]) && !isspace(a[i - 1])) {
                word_count++;
            }
            cha_count++;
            i++;
        }
        if (!isspace(a[i - 1])) {
            word_count++;
        } else if (a[i - 1] == '\n') {
            line_count++;
        }
        line_count++;
    }
    printf("line is %d, character is %d word is %d\n", line_count, cha_count, word_count);
    return 0;
}


/*
int main(int argc, char *argv[]) {

    if (argc < 1) {
        printf("No file\n");
        return 1;
    }
    
    FILE *stream = stdin;
    
    if (stream == NULL) {
        perror(argv[0]);
    }
    
    int word_count = 0;
    int line_count = 0;
    int cha_count = 0;
    
    int cha = fgetc(stream);
    int pre_cha = ' ';
    
    while (cha != EOF) {
    
        if (cha == '\n') {
            line_count++;
        }
        if (isspace(cha) && !isspace(pre_cha)) {
            word_count = word_count + 1;
        }
        cha_count++;
        pre_cha = cha;
        cha = fgetc(stream);
    }
    if (!isspace(pre_cha)) {
        word_count = word_count + 1;
    }
    fclose(stream);
    return 0;
}

*/

/*
int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Not enough files\n");
        return 1;
    }
    
    int argument = 1;
    FILE *stream = fopen(argv[argument], "r");
    FILE *print = fopen(argv[argument + 1], "a");
    int cha = fgetc(stream);
    if (stream == NULL) {
        perror(argv[argument]);
    } else if (print == NULL) {
        perror(argv[argument + 1]);
    }
    
    while (cha != EOF) {
    
        fputc(cha, print);
        cha = fgetc(stream);
    }

    fprintf(print, "I want HDs!");
    
    fclose(stream);
    fclose(print);
    return 0;
}
*/
/*
int ordered(struct node *head) {

    struct node *curr = head;
    if (head == NULL) {
        return 0;
    }
    while (curr->next != NULL) {
        if (curr->data <= curr->next->data) {
            return 0;
        }
        curr = curr->next;
    }
    return 1;
}*/
/*
int main() {

    char goals[] = "All your goals belong to us.";
    char *a, *b, *c, *d;

    a = goals + 5;
    b = &goals[10];
    c = goals + (b - goals) + (b - a);
    *d = 12;
    printf("a++ is %s\n", a++);
    printf("b is %c\n", *b);
    printf("c[-5] is %c\n", c[-6]);
    printf("a - b is %d\n", a - b);
    //printf("d is %d\n", *d);
*/
/*
    int i = 0;
    int j = 0;
    char *s = "ceded";

    while (s[i] != '\0') {
        j = j + s[i] - 'a';
        i = i + 1;
    }
    printf("%d %d\n", i, j);
    */
/*
// text - the array of strings
// array_size - the number of strings in the array
// num_chars - print out any strings in the array with more than this number
// of characters
void print_if_longer(int array_size, char text[array_size][MAX_LEN], int num_chars) {
    int i = 0;
    while (i < array_size) {
        int j = 0;
        while (text[i][j] != '\0' && text[i][j] != '\n') {
            j++;
        }
        if (j > num_chars - 1) {
            int k = 0;
            while (k < j) {
                printf("%c", text[i][j]);
                k++;
            }
        }
        i++;
    }


}*/
/*
int main(int argc, char *argv[]) {

    if (argc < 2) {
        return 1;
    }
    
    int i = 1;
    while (i < argc) {
        FILE *stream = fopen(argv[i], "r");
        
        if (stream == NULL) {
            perror(argv[i]);
            return 1;
        }
        */
        /*
        int c = fgetc(stream);
        while (c != EOF) {
            fputc(c, stdout);
            c = fgetc(stream);
        
        }
        */
        /*
        char array[10000] = {0};
        while (fgets(array, 1000, stream) != NULL) {
            printf("%s\n", array);
        }
        i++;
    }
}
*/



/*
int main(int argc, char *argv[]) {

    if (argc < 2) {
        return 1;
    }
    
    int i = 1;
    while (i < argc) {
        FILE *stream = fopen(argv[i], "r");
        if (stream == NULL) {
            perror(argv[i]);
            return 1;
        }
        int c = fgetc(stream);
        while (c != EOF) {
            fputc(c, stdout);
            c = fgetc(stream);
        }
        
        i++;
    }

    return 0;
}
*/


/*
#define MAX_LENGTH 100000
int main(int argc, char *argv[]) {
    FILE *stream = fopen("andrew.txt", "r");
    
    if (stream == NULL) {
        fprintf(stderr, "%s: open of '%s' failed\n", argv[0], "andrew.txt");
        return 1;
    }
    
    fprintf(stream, "AWWWWW\n");
    fclose(stream);
    return 0;
}
*/
/*
void print_array(int array[], int num) {
    int i = 0;
    while (i < num) {
        printf("the num is %d\n", array[i]);
        i++;
    }

}


int main(int argc, char *argv[]) {

    int array[10] = {1, 2, 3, 4 , 5, 6, 7, 8, 9 ,10};
    int *p = &array[3];
    
    print_array(p, 4);
    return 0;
}

*/
/*
void square(double x, double *a) {
    *a = x * x;
}
*/
/*
void swap(double *x, double *y);

void swap(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char *argv[]) {
    double x = 4.6;
    double y = 5.2;
    swap(&x, &y);
    printf("the address is %p\n", &x);
    printf("the address of y is %p\n", &y);
    printf("x is %f y is %f\n", x, y);
    return 0;
}
*/

/*#include <stdio.h>

#define SIZE 10000

//void print_grade(int mark);

int main() {*/

//scanf and simple if statement
/*  int x, y;
    scanf("%d %d", &x, &y);
    printf("x is %d, y is %d\n", x, y);
    
    if (x < y) {
        y = -x;
        printf("new y is %d\n", y);
    }*/
    
    
    //while loop
    /*int mark;
    scanf("%d", &mark);
    
    while (mark >= 0) {
        if (mark >= 50) {
            printf("You have passed!\n");
        } else {
            printf("You failed the course!\n");
        }
        
        printf("Enter the mark:");
        scanf("%d", &mark);
    }*/
    
    //while loop end with Ctrl D
    
    /*int mark;
    int noRead = scanf("%d", &mark);
    
    while (noRead == 1) {
        if (mark >= 50) {
            printf("You have passed!\n");
        } else {
            printf("You failed the course!\n");
        }
        
        printf("Enter the mark:");
        noRead = scanf("%d", &mark);
    }*/
    
    //functions
    /*int mark;
    scanf("%d", &mark);
    print_grade(mark);*/
    
    
    /*
    double a = 33268329.56823923;
    int b = 6;
    
    printf("%-5.8lf", a);
    printf(":\n");*/
    
    //char array[SIZE] = {"HELLO"};
    //printf("%s\n", array);
    
    /*int cur = 0;
    printf("Enter an integer:\n");
    int noRead = scanf("%d", &cur);
    int prev = cur;
    printf("Enter an integer:\n");
    noRead = scanf("%d", &cur);
    
    if (noRead != 1) {
        return 0;
    }
    
    while (noRead == 1) {
        if (prev == cur) {
            printf("Snap!\n");
            break;
        }
    printf("Enter an integer:\n");
        prev = cur;
        noRead = scanf("%d", &cur);
    }
    
    printf("END");*/
    
    /*
    int prev[SIZE] = {0};
    int currvalue = 0;
    int noRead = scanf("%d", &currvalue);
    
    if (noRead != 1) {
        return 0;
    }
    
    while (noRead == 1) {
        prev[currvalue]++;
        if (prev[currvalue] == 2) {
            printf("Snap!\n");
            
        }
        noRead = scanf("%d", &currvalue);
    }*/
    
    /*char i = 98;
    
    printf("%c\n", i);
    return 0;
    
}*/
/*
void print_grade(int mark) {
    if (mark > 85) {
        printf("HD\n");
    } else if (mark >= 50) {
        printf("Passed\n");
    } else {
        printf("Fail\n");
    }
}*/



/*
#include <stdio.h>

int main(void) {
    int x = 11;
    int y = 3;
    printf("%d\n", x / y);
    return 0;
}*/


/*#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%d\n", argc);
    return 0;
}*/

/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char *s = "hello";
    printf("%d\n", strcmp(s, s));
    return 0;
}
*/


//#include <stdio.h>
//#include <stdlib.h>
//int makeupercase(int cha);

//int main(int argc, char *argv[]) {

    /*
    putchar('A');
    
    char a[] = "eadhd\n";
    printf("%s", a);
    printf("\n");
    */
    
    /*
    int ch = getchar();
    while (ch != EOF) {
        printf("you entered the character: '%c' which has ASCII code %d\n", ch, ch);
        ch = getchar();
    }
    
    */
    
    //printf("the cha is %c\n", 56);
    
    
    /*
    int cha = getchar();
    int a[1000] = {0};
    int i = 0;
    while(cha != EOF) {
        a[i] = makeupercase(cha);
        i++;
        cha = getchar();
    }
    
    int j = 0;
    while (j < i) {
        printf("%c\n", a[j]);
        j++;
    }
    */
    
    /*
    char line[1000];
    
    fgets(line, 123, stdin);
    int i = 0;
    while (line[i] != '\0' && line[i] != '\n') {
        printf("%d\n", line[i]);
        i++;
    }
    */
    
    
    /*
    char line[10000];
    int i;

    printf("Enter a single digit number: ");
    fgets(line, 10000, stdin);
    if (line[0] >= '0' && line[0] <= '9') {
        i = line[0] - '0';
        printf("You entered %d\n", i);
    }
    return 0;
    */
    /*
    int cha = getchar();
    
    int n = 0;
    while (cha >= '0' && cha <= '9') {
        n = 10 * n + cha - '0';
        
        cha = getchar();
    }
    
    printf("the num is %d\n", n);
    */
    
    /*
    if (argc == 1) {
        printf("NO arguments\n");
    } else {
        printf("It is %s\n", argv[argc - 1]);
    }
    */
    /*
    int sum = 0;
    
    int i = 0;
    while (i < argc) {
        sum += atoi(argv[i]);
        i++;
    }
    
    printf("the sum is%d\n", sum);
    return 0;
}
*/
/*
int makeupercase(int cha) {

    if (cha < 'a' || cha >'z') {
        return cha;
    } else {
        cha = cha - 'a' + 'A';
        return cha;
    }
}
*/






//my fgets
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_fgets(char cha[], int n);


int main(int argc, char *argv[]) {
    char str[1000];
    my_fgets(str, 100);
    char str2[] = {0};
    fgets(str2, 100, stdin);
    if (strcmp(str, str2) != 0) {
        printf("not Success!!\n");
    }
    return 0;

}

char *my_fgets(char cha[], int n) {
    int ch = getchar();
    if (ch == EOF) {
        return NULL;
    }
    int i = 0;
    cha[i] = ch;
    while (i < n - 1) {
        if (ch == EOF) {
            cha[i] = '\0';
            return cha;
        }
        cha[i] = ch;
        i++;
        ch = getchar();
    }
    cha[i] = '\0';
    return cha;

}
*/

/*
#include <stdio.h>
#include <string.h>

#define MAX_LINE 10000

int main(int argc, char *argv[]) {
    char str1[MAX_LINE] = {0};
    char str2[MAX_LINE] = {0};
    printf("Enter a string\n");
    fgets(str1, MAX_LINE, stdin);
    printf("Enter a string\n");
    fgets(str2, MAX_LINE, stdin);
    
    if (strlen(str1) != strlen(str2)) {
        printf("1\n");
    } else if (strcmp(str1, str2) == 0){
        printf("2\n");
    } else {
        int i = 0;
        while (i < strlen(str1)) {
            if (str1[i] != str2[i]) {
                if ('a' <= str1[i] && str1[i] <= 'z') {
                    str1[i] = str1[i] - 'a' + 'A';
                    if (str1[i] != str2[i]) {
                        printf("4\n");
                        return 0;
                    }
                } else {
                    str2[i] = str2[i] - 'a' + 'A';
                    if (str1[i] != str2[i]) {
                        printf("4\n");
                        return 0;
                    }
                }
            }
            i++;
        }
    
        printf("3\n");
    
    }
}
*/

/*
#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;
    int j = 0;
    
    while (i < argc) {
        j = 0;
        while (argv[i][j] != '\0') {
            printf("%c", argv[i][j]);
            j++;
        }
        printf(" ");
        i++;
    }
    printf("\n");
    return 0;
}
*/
/*
#include <stdio.h>

void cube(double x, double *a, double *b) {
    *a = x * x;
    *b = x * x *x;
}

int main(int argc, char *argv[]) {

    double a, b;
    
    cube(1.1, &a, &b);
    
    printf("new a is %d new b is %d\n", a, b);
    return 0;
}
*/
