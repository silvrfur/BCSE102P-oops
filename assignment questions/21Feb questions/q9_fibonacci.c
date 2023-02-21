#include <stdio.h>
int fibo(int n){
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
        
}
int main()
{
    int n,f;
	printf("Enter the term till which the fibo series has to be generated \n");
	scanf("%d",&n);
    for(int i=0;i<=n;i++){
        f=fibo(i);
        printf("%d ,",f);
    }
	return 0;
	
}
