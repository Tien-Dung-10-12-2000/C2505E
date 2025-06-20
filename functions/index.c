#include <stdio.h>

float multiply(float x, float y);
void inputIntValue(char *label, int *result);
void inputFloatValue(char *label, float *result);

int main()
{
    float x;
    float y;
    inputFloatValue("Enter x = \n", &x);
    inputFloatValue("Enter y = \n", &y);
    float result = multiply(x, y);
    printf("x * y = %f\n", result);
    return 0;
}

float multiply(float x, float y)
{
    return x * y;
}

void inputIntValue(char *label, int *result)
{
    printf("%s", label);
    scanf("%d", result);
}

void inputFloatValue(char *label, float *result)
{
    printf("%s", label);
    scanf("%f", result);
}
