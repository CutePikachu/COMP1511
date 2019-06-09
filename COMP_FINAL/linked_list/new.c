#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(int argc, char *argv[]) {
    printf("Enter tot ");
    int tot;
    scanf("%d", &tot);
    printf("Enter num ");
    int num;
    scanf("%d", &num);
    struct node *new = malloc(sizeof(struct node));
    new->data = num;
    new->next = NULL;
    struct node *tail = new;
    
    int i = 0;
    while(scanf("%d", &num) == 1) {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
        i++;
        if (i == tot - 1) {
            break;
        }
    }
    
    struct node *curr = new;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
    return 0;
}
