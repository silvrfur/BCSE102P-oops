#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d",&age);
    printf(age>=18?"eligible to vote":"not eligible to vote");
    return 0;
}
