/*  syntex:
    data_type **pptr;
*/

//example :
#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("x value   = %d\n", x);
    printf("*p value  = %d\n", *p);
    printf("**pp value= %d\n", **pp);
    return 0;
}
