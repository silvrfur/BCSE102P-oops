//program to print substring 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[]="geeks"; //note \0 null is not added here
    int n=strlen(str);
    // printf("the length of string is %d",n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for(int k=i;k<=j;k++)
                 printf("%c",str[k]);
            printf(",");
        }
        printf("\n");
    }
    
    return 0;
}
