#include<stdio.h>
int main(){
    int a = 5;
    int *p, *q;
    p = &a;
    q = p + 1;
    printf("p and q are : %p %p\n", p, q);

    int Ai[100];
    int *pi;
    pi = Ai + 2;
    printf("difference returns number of elements : pi - Ai = %lld", pi-Ai);    //long long int
    return 0;
}
