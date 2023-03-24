#include <stdio.h>
int main(){
    printf("Enter the no. of stars to be printed in a row\n");
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--){

        for (int k = 0; k < i; k++){
            printf(" ");
        }
        for (int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}