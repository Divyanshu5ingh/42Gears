#include <stdio.h>

int main()
{
    float a;
    int b;
    printf("Enter value");
    scanf("%f", &a);

    printf("Enter point  ");
    scanf("%d", &b);

    printf("%0.b f", b, a);
    return 0;
}