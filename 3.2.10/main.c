#include <stdio.h>
#include <stdlib.h>
int wsk(void);
int main()
{
    wsk();
    return 0;
}

int wsk(void)
{
    double n, *wsk_n=&n;
    printf("Zwracam wskaznik: %d", wsk_n);
}
