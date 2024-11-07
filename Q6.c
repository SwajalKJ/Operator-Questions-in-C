// Q6. Implement a C program using formatted I/O using printf (%5d, %05d,%-5d,%8.2f, %.2f etc.)

#include <stdio.h>
int main()
{
    int a = 5;
    float b = 5.5;

    printf(" a1 = %5d\n a2 = %05d\n a3 = %-5d\n b1 = %8.2f\n b2 = %.2f\n", a, a, a, b, b);
    return 0;
}
