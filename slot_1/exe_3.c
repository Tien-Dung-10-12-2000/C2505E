#include <stdio.h>

int main()
{
    /**
     * Xác định mức pin và hiển thị thông báo tương ứng (Thấp, Trung bình, Cao).
     */
    int u;
    printf("Voltage (u) = \n");
    scanf("%d", &u);

    if (u >= 20)
    {
        printf("Battery high");
    }
    else if (u < 20 && u >= 15)
    {
        printf("Battery medium");
    }
    else
    {
        printf("Battery low");
    }

    return 0;
}
