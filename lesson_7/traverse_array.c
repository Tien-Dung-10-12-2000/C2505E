#include <stdio.h>

int main(int argc, char const *argv[])
{

    int array[7] = {10, 20, 50, 1, 0, 99, 100};
    int *ptr = array;
    for (int i = 0; i < 7; i++)
    {
        printf("Array[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
