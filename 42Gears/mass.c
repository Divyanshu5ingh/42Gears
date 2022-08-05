#include <stdio.h>
#include<math.h>

float momentum(int mass, int velocity)
{
   int light = 299792458;
   float xy;

   xy = ((mass * velocity) / sqrt(1-((velocity*velocity)/ (light*light))));
    return xy;


}

int main()
{
    int mass;
    int velocity;
    float res;

    printf("Enter mass:: ");
    scanf("%d", &mass);

    printf("Enter velocity:: ");
    scanf("%d", &velocity);

    res = momentum(mass, velocity);
    printf("%f", res);


    return 0;
}