/* This C program demonstrates the switch statement without using breaks. */
/* The program is tested on MS Visual C++ platform                        */

#include <stdio.h>
#pragma warning(disable : 4996)

int even(int i);
int termination(int j);
void main() {
    printf("Please enter an integer:");
    int n;
    scanf("%d", &n);
    n = termination(n);
    printf("%d\n", n);
}
int even(int i){
    int x = 0;
    if (i%2 == 0) {
        x = 1;
    }
    return x;
}
int termination(int j) {
    int c = 0;
    while (j != 1) {
        c++;
        if (even(j) == 1) {
            j = j/2;
        } else {
            j = (3*j) + 1;
        }
    }
    printf("%d\n", c);
    return j;
    }