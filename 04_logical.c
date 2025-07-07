#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a||b);

    int c = 1;
    int d = 1;
    printf("The value of c and d is %d\n", c&&d);
    printf("The value of c or d is %d\n", c||d);

    int e = 1;
    int f = 0;
    printf("The value of e and f is %d\n", e&&f);
    printf("The value of e or f is %d\n", e||f);
    return 0;
}