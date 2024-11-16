#include <stdio.h>

void find_max(int, int);

int main()
{
    int x, y;
    printf("Enter any 2 values: \n");
    scanf("%d%d", &x, &y);
    find_max(x,y);
    return 0;
}

void find_max(int x, int y)
{
    int max;
    if (x > y)
        max = x;
    else
        max = y;
    printf("Maximum value is: %d\n", max);
}