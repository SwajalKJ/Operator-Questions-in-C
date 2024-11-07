/*
Q5. Write a program to convert time between hh:mm:ss format and total no.of seconds
(note:- you may take the input hh,mm,ss separately, need not be in string form)
( for eg:- 1:2:30 ==> 3750 8000 ==> 2:13:20 )
*/
#include <stdio.h>
int main()
{
    int sec, h, m, s;

    printf("Input seconds: ");
    scanf("%d", &sec);

    h = (sec / 3600);
    m = (sec - (3600 * h)) / 60;
    s = (sec - (3600 * h) - (m * 60));

    printf("H:M:S - %02d:%02d:%02d\n", h, m, s);
    return 0;
}
