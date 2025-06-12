#include <stdio.h>

int main()
{
    // 1.Viết chương trình kiểm tra nhiệt độ và in ra 'Nóng' nếu lớn hơn 40 độ
    float t;
    printf("Temperature Celcius degree (t) = \n");
    scanf("%f", &t);
    if (t > 40)
    {
        printf("Hot hot hot!\n");
    }
    else
    {
        printf("Temperature is normal\n");
    }
    return 0;
}
