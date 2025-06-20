#include <stdio.h>

// void minmax(int arr[], int lent, int *min, int *max)
// {
//     *min = *max = arr[0];
//     for (int i = 1; i < lent; i++)
//     {
//         if (arr[i] > *max)
//             *max = arr[i];
//         if (arr[i] < *min)
//             *min = arr[i];
//     }
// }

void minmax(int *arr, int lent, int *min, int *max)
{
    *min = *max = *arr;
    for (int i = 1; i < lent; i++)
    {
        int currentValue = *(arr + i);
        if (currentValue > *max)
            *max = currentValue;
        if (currentValue < *min)
            *min = currentValue;
    }
}

int main()
{
    int myArray[7] = {12, 43, 50, 67, 34, 89, 87};
    int min;
    int max;
    minmax(myArray, 7, &min, &max);
    printf("Min = %d, Max = %d\n", min, max);
    return 0;
}
