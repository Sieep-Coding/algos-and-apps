#include <stdio.h>

int main()
{
    int x = 100;
    float y = 7.86;
    char ch = 'A';
    printf("x = %d\n", x);
    printf("Address of x = %u\n", &x);
    printf("y = %.2f\n", y);
    printf("Address of y = %u\n", &y);
    printf("ch = %c\n");
    printf("Address of ch = %u\n", &ch);
}