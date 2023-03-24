#include <stdio.h>    
     
int main()    
{    
    int length; 
    printf("Enter the size of array \n");
    scanf("%d",&length);
    int arr[length];
    printf("Enter the array \n");
    //loop to input array
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    printf("Enter the position from which it is to be rotated \n");
    scanf("%d",&n);


    //loop for displaying original array
    printf("Original array: \n");    
    for (int i = 0; i < length; i++)
    {   
        if(i==length-1)
            printf("%d\n",arr[i]);
        else
            printf("%d,",arr[i]);
    }


    //making copy of arr for right rotation
    int arr2[length];
    for (int i = 0; i < length; i++){
        arr2[i]=arr[i];
    }
    

    //Rotate the given array by n times toward left and right   
    for(int i = 0; i < n; i++){    
        int first=arr[0], last=arr2[length-1], k=length-1;
        for(int j = 0; j < length-1; j++){    
            arr[j] = arr[j+1]; 
            arr2[k]=arr2[k-1];
            k--;   
        }    
        //First element will be added to the end in left rotation
        //Last element will be added to 0th postion in right rotation   
        arr[length-1] = first; 
        arr2[0] =last;  
    }    
           

    //after left rotation    
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    } 
    printf("\n");   
    //after right rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}    