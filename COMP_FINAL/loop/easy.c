#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define MAX_STR 4096

int main (int argc, char * argv[]) {
    if (argc < 2) {
        printf ("Usage: ./string_replace <char> <string>\n");
        return 1;
    }

    // get the char 
    char c = argv[1][0];

    // get length of string 
    int s_len = strlen (argv[2]);

    // the text string that we will get from stdin
    char text[MAX_STR];

    // handling each line of input
    while (fgets (text, MAX_STR, stdin) != NULL) {

        // count the instances of c that appear
        int text_len = 0;
        int count = 0;
        while (text[text_len] != 0) {
            if (text[text_len] == c) {
                count ++;
            }
            text_len ++;
        }
        
        // malloc: new string is the length of text,
        // plus the amount of replacements we have to make
        // the negative one is to account for how we replace, so we 
        // write over the old char "count" many times
        char * new = malloc (sizeof (char) * (text_len + count * (s_len-1)));

        // index for text
        int i = 0;
        // index for the new string 
        int n = 0;

        while (i < text_len) {
            // if it equals the character, copy in argv[2]
            if (text[i] == c) {
                strcat (&new[n], argv[2]);
                n = n + s_len;
            } 
            // else, copy in the original character 
            else {
                new[n] = text[i];
                n ++;
            }
            i++;
        }

        // add in null
        new[n] = 0;

        printf ("new: %s\n", new);
        free(new);
    }

    return 0;
}


/*
char * concat (char *s1, char *s2) {
    int len1 = 0;
    while (*(s1 + len1) != 0) len1 ++;

    int len2 = 0;
    while (*(s2 + len2) != 0) len2 ++;
    char *new = malloc(sizeof(char)*(len1 +len2 + 1));
    
    int i = 0;
    while (s1[i] != '\0' && s1[i] != '\n') {
        new[i] = s1[i];
        i++;
    }
    int j = 0;
    while (s2[j] != '\0' && s2[j] != '\n') {
        new[i] = s2[j];
        i++;
        j++;
    }
    new[i] = 0;
    return new; 
}

int main (int argc, char * argv[]) {
    
    char s1[MAX_LINE];
    char s2[MAX_LINE];

    if (scanf ("%s %s", s1, s2) == 2) {
        char * s = concat (s1, s2);
        printf ("%s + %s = %s\n", s1, s2, s);
        free (s);
    } else {
        printf ("Couldn't scan in 2 numbers\n");
    }

    return 0;
}
*/
/*
void sort_3 (double * x, double * y, double *z) {
    double arr[4] = {0};
    arr[0] = *x;
    arr[1] = *y;
    arr[2] = *z;
    int i = 0;
    int j = 0;
    while (j < 3) {
    	i = 0;
	    while (i + 1 < 3) {
			if (arr[i] > arr[i + 1]) {
				double temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			i++;
		} 	
    	j++;
	}
	*x = arr[0];
	*y = arr[1];
	*z = arr[2];

}
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    sort_3( &a, &b, &c);
    printf("%.2lf %.2lf %.2lf\n", a, b, c);
    return 0;
}
*/
/*
int main(int argc, char *argv[]) {
    FILE *inputstream = fopen(argv[1], "r");

    int num;
    fscanf(inputstream, "%d", &num);
    int a1[num];
    int a2[num];
    int i = 0;
    while (i < num) {
        fscanf(inputstream,"%d", &a1[i]);
        i++;
    }
    
    FILE *outputstream = fopen("out.txt", "a");
    i = 0;
    while (i < num) {
        fscanf(inputstream,"%d", &a2[i]);
        i++;
    }
    i = 0;
    int sum = 0;
    while (i < num){
        sum = a1[i] * a2[i] + sum;
        i++;
    }
    
    fprintf(outputstream, "%d", sum);
    
    fclose(inputstream);
    fclose(outputstream);
    return 0;
}
*/
/*
int main() {
    int num;
    scanf("%d", &num);
    
    int i = 0;
    int j = 0;
    while (i < 2 * num - 1) {
        j = 0;
        while (j <= 2 * num - 1) {
            if (i + j < num || (2 * num - 2 - i + j)< num) {
                printf(" ");
            } else if(j >= num ) {
                if (j > num + i || i > 3*num - j - 2) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }else {
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
/*
int main() {
    int num;
    scanf("%d", &num);
    
    int i = 0;
    int j = 0;
    while (i < num) {
        j = 0;
        while (j < num) {
            if (i == 0 || j == 0 || i == num/2 || j == num - 1) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
/*
int main() {
    int cha = fgetc(stdin);
    while (cha != '\0' && cha != '\n') {
        if (isalpha(cha)) {
            if ('a' <= cha && cha <='z') {
                cha = cha - 'a' + 'A';
            } else {
                cha = cha - 'A' + 'a';
            }
        }
        fputc(cha, stdout);
        cha = fgetc(stdin);
    }
    printf("\n");
    return 0;
}*/
/*
int main() {
    int num[1000] = {0};
    int i = 0;
    int count = 0;
    while (scanf("%d", &num[count]) == 1) {
        i = 0;
        while (i < count) {
            if (num[i] == num[count]) {
                printf("%d is repeated.\n", num[i]);
                return 0;
            }
            i++;
        }
        count++;
    }
    return 0;
}*/
