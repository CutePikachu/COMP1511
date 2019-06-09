#include <stdio.h>
#include <stdlib.h>

//Created by Mitchell Shelton
//Modified by <you>

void sort(int len, int *arr);
void printarray(int len, int *arr);

int main(int argc, char* argv[]) {
    //DO not change the stuff in main

    int size; 
    scanf("%d", &size);
    
    int *array = malloc(sizeof(int) * size);
    int i = 0;
    while (i < size) {
        scanf("%d", &array[i]);
        i++;
    }
    sort(size, array);
    printarray(size, array);
    free(array);
    return 0;
}

//given an array of length n, sort the array.

//e.g given len = 5 and arr = 5, 3, 2, 1, 4
//sorted array should be 1, 2, 3, 4, 5
void sort(int len, int *arr) {
    int i = 0;
    int j = 0;
    while (j < len) {
    	i = 0;
	    while (i < len) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			i++;
		} 	
    	j++;
	}
	
 
}

void printarray(int len, int *arr) {
    int i = 0;
    while (i < len) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
