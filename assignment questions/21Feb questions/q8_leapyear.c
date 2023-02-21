#include <stdio.h>
int main()
{
    int yr;
	printf("Enter the year to be checked \n");
	scanf("%d",&yr);
    if(yr%4==0)
        printf("leap year");
    else
        printf("not a leap year");
	return 0;
	
}
