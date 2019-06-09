#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp = fopen(argv[1], "a");
    fputs(argv[2], fp);
    return 0;
}
