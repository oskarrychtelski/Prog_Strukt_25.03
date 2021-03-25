#include <stdio.h>
#include <stdlib.h>
int wsk(int, int);
int main()
{
    wsk(200,1);
    return 0;
}

int wsk(const int n,const int k)
{
    int *wsk_n=&n, *wsk_k=&k;
    printf("suma to: %d", *wsk_n+*wsk_k);
}
