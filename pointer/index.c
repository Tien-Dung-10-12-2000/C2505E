#include <stdio.h>

int main()
{
    // int *ptr;

    // printf("--%d--", *ptr);
    // printf("--%d--", sizeof(float *));

    char *myString[3]= {
        "Hello world",
        "Nikita",
        "Nguyen",
    };

    for (int i = 0; i < (sizeof(myString) / sizeof(char*)); i++)
    {
        printf("%s\n", myString[i]);
    }

    return 0;
}
