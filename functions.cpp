#include <stdio.h>

int find_max(int, int);

int main()
{
    int x = 10, y = 7;
    printf("Max value is: %d\n", find_max(x, y));
    return 0;
}

int find_max(int x, int y)
{
    int max;
    if (x > y)
        max = x;
    else
        max = y;
    return max;
}