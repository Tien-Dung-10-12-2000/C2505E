#include <stdio.h>

int main()
{
    // 3. So sánh hai giá trị cảm biến và in ra giá trị lớn hơn
    int sensor1, sensor2;
    printf("Enter sensor 1 value: \n");
    scanf("%d", &sensor1);
    printf("Enter sensor 2 value: \n");
    scanf("%d", &sensor2);

    if (sensor1 > sensor2)
    {
        printf("Sensor 1 has higher: %d\n", sensor1);
    }
    else if (sensor2 > sensor1)
    {
        printf("Sensor 2 has higher: %d\n", sensor2);
    }
    else
    {
        printf("Sensor 1 and sensor 2 have the same value\n");
    }

    return 0;
}
