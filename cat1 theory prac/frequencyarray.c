//wap to input array and find freqency of each element 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //input a array
    int size;
    printf("input the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elments of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int visited[size];
    for (int i = 0; i < size; i++)
    {   int count=1;
        if(visited[i]!=1)
            for(int j=i+1;j<size;j++){
                if(arr[j]==arr[i])
                    count+=1;
                    visited[j]=1;
            }
        printf("The frequency of %d is %d\n",arr[i],count);
    }

    return 0;
}
