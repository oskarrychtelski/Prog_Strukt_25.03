#include <stdio.h>
#include <conio.h>
int wsk(int, int);
void main ()
{
    wsk(100,200);
    return 0;
}

int wsk(int k, int n)
{
    int *wsk_n=&n, *wsk_k=&k;
    if (k<n){
        wsk_n=&k;
        wsk_k=&n;
    }
    printf("k: %d, n:%d", *wsk_k, *wsk_n);
}
