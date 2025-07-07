#include <stdio.h>
int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d", a, b, c);
// MODULUS operator is used to get remiander
    printf("The remainder when a is divisible by b is: %d\n",a%b);
    // This does not work for exponential in c 
    // int d = a^b;
    return 0;
}