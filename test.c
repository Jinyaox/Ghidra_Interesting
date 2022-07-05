#include <stdio.h>

extern int greater(int a, int b);

int main(int argc, char const *argv[]) {
    int first=4;
    int second=8;
    int n=greater(first,second);
    printf("%d",n);
    return 0;
}