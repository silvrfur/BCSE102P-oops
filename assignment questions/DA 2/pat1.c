/*
Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.
Input:
11
Output:
11 is prime number
11 is not a armstrong number
11 is not a perfect number
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void prime(int n){
    int flag=true;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=false;
            break;
        }
        
    }
    if(flag==true){
        printf("Prime Number\n");
    }
    else{
        printf("Not a prime number\n");
    }
    
}

void armstrong(int n){
    int count=0,num=n,d,sum=0;
    //loop to count number of digits
    while(num!=0){
        count+=1;
        num/=10;
    }
    num=n;
    while(num!=0){
        d=num%10;
        sum=sum+pow(d,count);
        num/=10;
    }
    if(sum==n){
        printf("Armstrong Number\n");
    }
    else{
        printf("Not an armstrong number\n");
    }
}

void perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n){
        printf("Perfect Number\n");
    }
    else{
        printf("Not a Pefect Number\n");
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfect(n);
    return 0;
}
