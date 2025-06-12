#include <stdio.h>

int main()
{
    /**
     * Bật quạt làm mát nếu nhiệt độ vượt ngưỡng cho phép.
     */
    int t;
    printf("°C (t) = \n");
    scanf("%d", &t);
    if (t > 32)
    {
        printf("Turn on the fan");
    }
    else
    {
        printf("Turn off the fan");
    }
    return 0;
}
