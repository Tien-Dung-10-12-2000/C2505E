#include <stdio.h>

int main()
{

    /**
     * Kiểm tra nhiệt độ và bật/tắt đèn LED tương ứng.
     */

    float t;
    printf("°C (t) = \n");
    scanf("%f", &t);

    if (t >= 36.5)
    {
        printf("LED is ON");
    }
    else
    {
        printf("LED is OFF");
    }

    return 0;
}
