#include <stdio.h>

int find_max();

int main()
{
    int z;
    z = find_max();
    printf("Maximum value is : %d \n", z);
    return 0;
}

int find_max()
{
    int x, y, max;
    printf("Enter any 2 values: \n");
    scanf("%d%d", &x, &y);
    if (x > y)
        max = x;
    else
        max = y;
    return max;
}