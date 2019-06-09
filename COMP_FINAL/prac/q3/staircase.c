j#include <stdio.h>
#include <stdlib.h>

//created by Mitchell Shelton
//Modified by <you>

void printStaircase(int size);

int main(int argc, char *argv[]) {
    //Do not modify main

    if (argc != 2) {
        printf("Usage: ./q1 size\n");
        exit(1);
    }
    
    
    printStaircase(atoi(argv[1]));
    return 0;
}

//Given a size (e.g 8)
//Should print a staircase like this:


//       J
//      HI
//     EFG
//    ABCD
//   VWXYZ
//  PQRSTU
// IJKLMNO
//ABCDEFGH
void printStaircase(int size) {

	int i = 0;
	int j = 0;
	int count = (1 + size) * size / 2 ;
	while (j < size) {
		i = 0;
		count = count - j - 1;
		int temp = count;
		while (i < size) {
			if ((i + j) >= (size - 1)) {
				printf("%c", temp%26 + 'A');
				temp++;
			} else {
				printf(" ");
			}
			i++;
		}
		printf("\n");
		j++;
	} 
}
