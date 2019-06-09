// COMP1511 18s2 -- a Set ADT
// Don't modify this file!

#ifndef _SET_H_
#define _SET_H_

#include <stdio.h>
#include <stdbool.h>
struct node {
    struct node *next;
    int item;
};

struct _set {
    struct node *set;
};
// Define a new `Set` type.
typedef struct _set *Set;


// Define an `item` type.  `Set` manipulates `item`s.
typedef int item;

// Create a new `Set`.
Set newSet(void) {
    Set new_set = malloc(sizeof(Set));
    return new_set;
}

// Release all resources associated with a `Set`.
void destroySet(Set set) {
    struct node *destroy = set->node;
    while (destroy != NULL) {
        struct node *temp = destroy;
        destroy = destroy->next;
        free(temp);
    }
    free(set);
}

// Add an `item` to the `Set`.
void setAdd(Set s, item item) {
    if (s->set == NULL) {
        s->set = malloc(sizeof(struct node));
        s->set->item = item;
        s->set->next = NULL;
    } else {
        struct node *new = malloc(sizeof(struct node));
        new->item = item;
        new->next = s->set;
        s->set = new; 
    }

}

// Remove an `item` from the `Set`.
void setRemove(Set s, item item) {
    if (s->set == NULL) {
        return;
    }
    struct node *curr = s->set;
    struct node *prev = NULL;
    while (curr != NULL) {
        if (curr->item == item) {
            if (prev == NULL) {
                s->set = s->set->next;
                curr = s->set;
            } else {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
        } else{
            prev = curr;
            curr = curr->next;
        }
    }
}

// Does the `Set` contain this `item`?
bool setContains(Set s, item item) {
    struct node *curr = s->set;
    while (curr != NULL) {
        if (curr->item == item) {
            return true;
        }
        curr = curr->next;
    }
    return false;

}

// How many items are in the `Set`?
int setSize(Set s) {
    struct node *curr = s->set;
    int count = 0;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

// Take the union of two sets(a â?ª b).
Set setUnion(Set a, Set b) {
    struct node *set_b = b->set;
    while (set_b != NULL) {
        if (!setContains(a, set_b->item) {
            struct node *temp = set_b;
            set_b = set_b->next;
            temp->next = a->set;
            a->set = temp;
        } else {
            set_b = set_b->next;
        }
    }

    return a;
}

// Take the intersection of two sets(a â?© b).
Set setIntersection(Set a, Set b) {
    struct node *set_b = b->set;
    Set new = newSet;
    struct node *newset = NULL;
    while (set_b != NULL) {
        if (setContains(a, set_b->item) {
            struct node *temp = set_b;
            set_b = set_b->next;
            temp->next = newset;
            new = temp;
        } else {
            set_b = set_b->next;
        }
    }
    new->set = newset;
    return new;

}

// Is `a` a subset of `b`(a â?? b)?
bool setSubset(Set a, Set b) {
    struct node *set = a->set;
    while (set != NULL) {
        if (!setContains(b, set->item)) {
            return false;
        }
    }
    return true;

}

// Is `a` equal to `b`(where a â?? b and b â?? a, a == b).
bool setEqual(Set a, Set b) {
    if (setSubset(a, b) && setSubset(b, a)) {
        return true;
    }
    return false;
}

#endif // !defined(_SET_H_)
