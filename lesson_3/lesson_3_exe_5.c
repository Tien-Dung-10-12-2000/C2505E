#include <stdio.h>

int main()
{
    // 5. Kiểm tra một số là âm hay dương để hiện thị cảnh báo.
    int lvl;
    printf("level (lvl): \n");
    scanf("%d", &lvl);
    if (lvl < 0)
    {
        printf("Level is below ZERO point\n");
    }
    return 0;
}
