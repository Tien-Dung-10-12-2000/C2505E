#include <stdio.h>

int main()
{
    /**
     * Chuyển đổi chế độ hoạt động của thiết bị dựa vào nút nhấn.
     */
    int b;
    scanf("%d", &b);
    if (b == 0)
    {
        printf("Turn OFF");
    }
    else if (b == 1)
    {
        printf("Turn ON");
    }

    return 0;
}
