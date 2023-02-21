#include <stdio.h>
#include <stdbool.h>
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    bool flag=prime(n);
    if(flag==true)
        printf("number is prime");
    else
        printf("number is not prime");
    
	
	return 0;
	
}
