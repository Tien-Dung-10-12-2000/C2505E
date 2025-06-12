#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    /*
        1. Input scanf()
    */
    // int mark;

    // printf("Enter mark: ");
    // scanf("%d", &mark); // <-- address of mark

    // printf("\nYour mark = %d", mark);

    /*
        2. Get size of a data type Sizeof(<data type>)
    */

    // printf("Size of char = %d", sizeof(char));

    /*
        3. Find max value from a, b, c
    */

    // int a, b, c;

    // printf("Enter a: ");
    // scanf("%d", &a);
    // printf("Enter b: ");
    // scanf("%d", &b);
    // printf("Enter c: ");
    // scanf("%d", &c);

    // printf("a = %d, b = %d, c = %d\n", a, b, c);

    // a >= b ? (
    //              a >= c ? printf("Max value is A = %d", a) : printf("Max value is C = %d", c))
    //        : (
    //              b >= c ? printf("Max value is B = %d", b) : printf("Max value is C = %d", c));

    /*
        4. Print out characters from 'a' to 'z';
    */
    // for (short int i = 0; i < 26; i++)
    // {
    //     printf("%c ", (char)(i + 97));
    // }
    // printf("\n");

    /*
        5. Input names and age to show greeting
    */
    // char names[40];
    // short int age;

    // printf("Enter your name: ");
    // fgets(names, sizeof(names), stdin);
    // // Remove trailing newline if present
    // names[strcspn(names, "\n")] = '\0';

    /*
        6. Count frequency of appearance in names
    */
    // for (short i = 0; i < strlen(names); i++)
    // {
    //     char currentChar = names[i];
    //     short count = 0;

    //     char *pointer = names;

    //     while (strchr(pointer, currentChar) != NULL)
    //     {
    //         count++;
    //         pointer = strchr(pointer, currentChar);
    //         pointer++;
    //     }

    //     printf("\n---%c--appears---%d-times\n", currentChar, count);
    // }

    // printf("Hello, %s. You're %d years old.", names, age);

    /*
        7. Pointer in C
    */

    // char myString[20];
    // fgets(myString, sizeof(myString), stdin);
    // myString[strcspn(myString, "\n")] = '\0';

    // char *pointer = myString;

    // for (short i = 0; i < strlen(myString); i++)
    // {
    //     printf("1---pointer--%s\n", pointer);
    //     printf("2---pointer--%d\n", pointer);
    //     pointer++;
    // }

    return 0;
}
