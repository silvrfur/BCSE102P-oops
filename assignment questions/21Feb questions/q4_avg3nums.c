#include <stdio.h>

int main()
{
    int n1,n2,n3;
    float avg;
    printf("Enter number 1 \n");
    scanf("%d",&n1);
    printf("Enter number 2 \n");
    scanf("%d",&n2);
    printf("Enter number 3 \n");
    scanf("%d",&n3);
    avg=(n1+n2+n3)/2.0;
    printf("the average is %f ",avg);
    return 0;
}
