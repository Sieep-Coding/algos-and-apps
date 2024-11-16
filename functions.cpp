#include <stdio.h>

void find_max();

int main()
{
    find_max();
    return 0;
}

void find_max()
{
    int x, y, max;
    printf("Enter any 2 values: \n");
    scanf("%d%d", &x, &y);
    if (x > y)
        max = x;
    else
        max = y;
    printf("Maximum value is : %d \n", max);
}