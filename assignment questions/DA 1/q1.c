// 1. Consider two basket of n size arrays A and B having red and green balls with numbers written on it.
// (i)First sort the arrays of A and B separately, 
// (ii)Generate all possible arrays such that the first element is taken from A and then from B, 
// (iii)The generated array should always start with the values of A and end with the values of B
// (3 Marks)


//input both array in single loop

#include <stdio.h>
#include <stdbool.h>

//function to input array
void inputArray(int arr[],int l){
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
}

//function to print array
void printArray(int arr[], int l){
        for (int i = 0; i < l ; i++)
            printf("%d ",arr[i]);
        printf("\n");
}

//function for sorting using bubble sort
void sort(int arr[],int n){
    bool swapped;
    for(int i=0;i<n;i++){
        swapped=false;
        for (int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                swapped=true;
            }
        }
        if(!swapped)
            break;
    }
    
}

//function for generating pair
void pair(int A[], int B[], int C[], int i, int j, int lenA, int lenB, int length, bool flag){
        if (flag)
        {
            if (length!=0)
                printArray(C, length+1);
            for (int k = i; k < lenA; k++)
            {
                if (length==0)
                {
                    C[length] = A [k];
                    pair(A, B, C, k+1, j, lenA, lenB, length, !flag);
                }
                else
                {
                    if (A [k] > C[length])
                    {
                        C[length+1] = A [k];
                        pair(A, B, C, k+1, j, lenA, lenB, length+1, !flag);
                    }
                }
            }
        }
        else
        {
            for (int l = j; l < lenB; l++)
            {
                if (B[l] > C[length])
                {
                    C[length+1] = B[l];
                    pair(A, B, C, i, l+1, lenA, lenB, length+1, !flag);
                }
            }
        }
    }
void generate(int A [], int B[], int lenA, int lenB){
        int C[lenA+lenB];
        pair(A, B, C, 0, 0, lenA, lenB, 0, true);
    }


int main()
{
    //input both the arrays
    int nA,nB;
    printf("Enter size of first array \n");
    scanf("%d",&nA);
    printf("Enter size of second array \n");
    scanf("%d",&nB);
    int A[nA],B[nB];
    printf("Enter the first array:\n");
    inputArray(A,nA);
    printf("Enter the second array:\n");
    inputArray(B,nB);
    
    //sort both the arrays
    sort(A,nA);
    sort(B,nB);
    printf("First array after sorting:\n");
    printArray(A,nA);
    printf("Second array after sorting:\n");
    printArray(B,nB);

    //generating possible array sorted
    printf("Resultant arrays:\n");
    generate(A,B,nA,nB);
    
    return 0;
}

