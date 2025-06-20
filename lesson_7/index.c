#include <stdio.h>

int main()
{
    int a = 11;
    int *ptr = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("--Value of ptr = %p\n", ptr);
    printf("--Addresss of ptr = %p\n", &ptr);

    printf("----Value pointed buy ptr = %d\n", *ptr);
    return 0;
}
