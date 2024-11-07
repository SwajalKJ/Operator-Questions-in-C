/*
Q7. Implement a C program, where is a=10,b=20,c=30 evaluate the following
d=++a,++b,++c,a+5;
d=(++a,++b,++c,a+5);
*/
#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int d;
    // Method 1
    d = ++a, ++b, ++c, a + 5; // d = ++a will be only shown as output also with ++b ++c will be internal incremented but a+5 is just expression and doesnt have any variable to store thus the operation will be performed internally but will not be saved.
    printf("%d %d %d %d\n", a, b, c, d);

    // Method 2
    d = (++a, ++b, ++c, a + 5); // all expression will be stored in d
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
