#include <stdio.h>
#include <stdlib.h>

int main()
{
    wsk(5);
    return 0;
}

int wsk(int n)
{
    int *wsk_n;
    wsk_n=&n;
    printf("%d", *wsk_n);
}
