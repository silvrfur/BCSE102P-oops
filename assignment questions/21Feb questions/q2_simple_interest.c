#include <stdio.h>

int main()
{
    int p,t;
    float r,si;
    printf("Enter the principal \n");
    scanf("%d",&p);
    printf("Enter the rate \n");
    scanf("%f",&r);
    printf("Enter the time in years \n");
    scanf("%d",&t);
    si=(p*r*t)/100.0;
    printf("the si is %f ",si);
    return 0;
}
