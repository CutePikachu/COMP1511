/*
#include <stdio.h>
#include <stdlib.h>
fgetc(fp);
struct node *set_intersection(struct node *set1, struct node *set2) {
    if (set1 == NULL || set2 == NULL) {
        return NULL;
    }
    
    struct node *curr = set2;
    struct node *new = NULL;
    struct node *tail = NULL;
    while (curr != NULL) {
        struct node *temp = set1;
        while (temp != NULL) {
            if (temp->data == curr->data) {
                struct node *head = malloc(sizeof(struct node));
                head->data = curr->data;
                head->next = NULL;
                if (new == NULL) {
                    new = head;
                    tail = new;
                } else {
                    tail->next = head;
                    tail = head;
                }
                break;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return new;
}
*/
/*
int main (int argc, char *argv[]) {
   char hello[5];
   hello [0] = 'H';
   hello [1] = 'e';
   hello [2] = 'l';
   hello [3] = 'l';
   hello [4] = 'o';
   int y = 0;
   int z = 2;
   int *x = &y;
   &x = &y;
   printf("%d\n", *x);
   char world[5];
   world [0] = 'W';
   world [1] = 'o';
   world [2] = 'r';
   world [3] = 'l';
   world [4] = 'd';

   //printf ("%s %s!\n", hello, world);
   return EXIT_SUCCESS;
}*/
/*#include <stdio.h>

int main(int argc, char *argv[]) {


    char str1[] = "hello";
    char str2[] = "hello";

    if (str1 == str2) {
       printf ("equal\n");
    } else {
       printf ("not equal\n");
    }*/
    /*
    int num = 0;
    scanf("%d", &num);

    if (num % 2 == 1) {
        printf("0\n");
        return 0;
    } 
    
    int remainder = 1;
    int count = 0;
    while (remainder == 1) {
        num = num/2;
        count++;
        if (num % 2 != 0 && num != 1) {
            printf("%d\n", count);
            return 0;
        }
        if (num == 1) {
            printf("%d\n", count);
            break;
        }
    
    }
    */
    /*
    return 0;
}
*/
