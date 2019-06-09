#include <stdio.h>
#include <string.h>
    #define N 6

typedef struct _complex *Complex;
typedef struct _complex {
   double real;
   double imaginary;
} complex;

Complex add (complex a, complex b){
   complex answer;
   answer.real = a.real + b.real;
   answer.imaginary = a.imaginary + b.imaginary;
   return &answer;
}

int main() {
 
    int i;
    char a[N];
    for (i = 0; i < N-1; i++){
        a[i] = 'A' + i;
    }
    a[2] = '\0';
    printf("%c\n",a[1+strlen(a)]);
    return 0;
}
