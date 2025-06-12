#include <stdio.h>

int main()
{
    // 4. Nếu cảm biến ánh sáng thấp, in 'Bật đèn'

    float l;
    printf("Enter sensor value (l): \n");
    scanf("%f", &l);
    if (l <= 100)
    {
        printf("Turn the light on\n");
    }

    return 0;
}
