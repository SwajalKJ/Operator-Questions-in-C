// Q2. Swapping of two no.s (with, without temporary, one line code with xor operator)

#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    int temp;
    // Methord 1
    temp = a; // temp = 5, a = 5
    a = b;    // a = 10 , b = 10
    b = temp; // b = 5, temp = 5, a = 10

    printf("%d %d\n", a, b);

    // Methord 2
    a = a + b; // a = 15 , b = 10
    b = a - b; // b = 5 , a = 15
    a = a - b; // a = 10 , b = 5

    printf("%d %d\n", a, b);

    // Methord 3

    a = (a ^ b) ^ (b = (a ^ b) ^ b); // a = 5 , b = 10
    printf("%d %d\n", a, b);

    return 0;
}
