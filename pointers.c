#include<stdio.h>
int main(){
    int a = 5;
    int b;
    int* ptr;   //pointer to integer quantities
    ptr = &b;
    printf("Value of a is : %d\n", a);
    printf("Address of a is : %p\n", &a);
    printf("Address of b is : %p\n", &b);
    printf("Address of b is : %p\n", ptr);

    int v, *pv; //int and int ptr can be declared like this
    return 0;
}