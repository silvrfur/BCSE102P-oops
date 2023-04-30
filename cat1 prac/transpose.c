#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][3], trans[3][2];
    printf("Enter the array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
            trans[j][i]=arr[i][j];
        }
        
    }
    
    printf("array before transpose\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
            // trans[j][i]=arr[i][j];
        }
        printf("\n");
        
    }
    printf("array after transpose\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",trans[i][j]);
            // trans[j][i]=arr[i][j];
        }
        printf("\n");
        
    }
    return 0;
}

