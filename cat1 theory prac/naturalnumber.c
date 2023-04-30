#include <stdio.h>
void natural(int n){
    if(n==1)
        printf("%d",1);

    else{
    printf("%d",n);
    natural(n-1);}
}
int main(int argc, char const *argv[])
{
    natural(5);
    return 0;
}
