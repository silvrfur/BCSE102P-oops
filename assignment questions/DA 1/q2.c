// 2.	Write a c program to analyse a student mark report using arrays and recursion concept.
// (i) Get the marks of a student and display all marks, 
// (ii) Find the overall marks obtained by the student using recursion, 
// (iii) Find the maximum and minimum marks obtained by the student.( 3 marks)
#include <stdio.h>
int overall(int arr[],int n){ //n is the size of array
    if (n <= 0) {
            return 0;
          }
    return overall(arr, n-1 ) + arr[n-1];
}

void max_min(int arr[],int size){ 
    int max=arr[0],min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("The maximum mark is %d\n",max);
    printf("The minimum mark is %d\n",min);
}

int main(){
    
    int ns; //number of subjects
    printf("Enter the number of subjects \n");
    scanf("%d",&ns);
    int marks[ns];
    printf("Enter the marks \n");
    //loop for inputing the marks of student
    for(int i=0;i<ns;i++) 
    {
        scanf("%d",&marks[i]);
    }
    //loop for displaying the marks of student
    for (int i = 0; i < ns; i++)
    {   
        if(i==ns-1)
            printf("%d\n",marks[i]);
        else
            printf("%d,",marks[i]);
    }

    //calculating overall marks
    int total=overall(marks,ns);
    printf("The overall marks is: %d \n",total);

    //getting max and min marks
    max_min(marks,ns);
    return 0;
}