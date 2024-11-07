/*
Q3. Implement a C program to Differentiate between post, pre decrement
operators, consider below mention scenario.
a) k=i++, k=++i
b) y=x++*10, y=++x*10
c) q=p--/3, q=—p/3
*/

#include <stdio.h>
int main()
{
	// Method 1
	int i = 5, k;
	k = (i++); // for i:  i++ = 5+1 = 6, for k: i++ = 5
	printf("%d %d\n", k, i);
	k = (++i); // for i: ++i = 6+1 = 7, for K: ++i = 7
	printf("%d %d\n", k, i);
	k = (i++) + (++i); // for i: i++ = (7+1) = 8, ++i = (8+1) = 9
					   // for k: i++ + ++i = 7 + 9 (internal increment of i++ is also there) = 12
	printf("%d %d\n", k, i);
	// Method 2
	int x = 5, y;
	y = ((x++) * 10); // for x: x++ = 5+1 = 6, for K: x++*10 = 50
	printf("%d %d\n", y, x);
	y = ((++x) * 10); // for x: ++x = (6+1) = 7, for K: (++x)*10 = 70
	printf("%d %d\n", y, x);
	y = ((x++) * 10) + ((++x) * 10); // for x:  x++ = (7+1) = 8, ++x = (8+1) = 9
									 // for y: x++*10 + ++x*10 = 70 + 90 = 160
	printf("%d %d\n", y, x);

	// Method 3
	int p = 5, q;
	q = ((p--) / 3); // for p: p-- = 5-1 = 4, for q: p--/3 = 4/3 = 1
	printf("%d %d\n", q, p);
	q = ((--p) / 3); // for p: --p = 4-1 = 3, for K: --p/3 = 3/3 = 1
	printf("%d %d\n", q, p);
	q = ((p--) / 3) + ((--p) / 3); // for p:  p-- = (3-1) = 2, --p = (2-1) = 1
								   // for q: p--/3 + --p/3 = 3/3 + 1/3 = 4/3 = 1
	printf("%d %d\n", q, p);
	return 0;
}
