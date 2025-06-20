#include <stdio.h>

int main()
{
    /* Chuyển đổi tóc độ truyền UART theo lựa chọn */

    int choice = 0;
    int baudrates[4] = {1200, 2400, 4800, 9600};
    int baudrate = baudrates[0];
    printf("Choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1 ... 4:
        baudrate = baudrates[choice - 1];
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
    printf("Baudrate = %d\n", baudrate);
    return 0;
}
