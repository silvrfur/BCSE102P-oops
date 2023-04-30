//wap to print the subsequence of charcter
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[]="abc";
    int lent=strlen(str);
    for(int len=0;len<lent;len++){
    for (int i = 0; i <=len; i++)
    {
        printf("%c",str[i]);
        for(int j=i+1;j<=len;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
    return 0;
}
