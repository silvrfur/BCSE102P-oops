/*Write a C Program o replace each character constant of a string with next one except letters ‘a’,’A’,’z’ & ‘Z’. Thus string “Programming in C is a fun”  should be modified as “Qsphsannjoh jo D jt gvo” */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[1000];
    int as;
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    for (int i = 0; i < strlen(str)-1; i++)
    {
        if(str[i]!='A' && str[i]!='a' && str[i]!='z' && str[i]!='Z' && isalpha(str[i])!=0){
         as=(int)(str[i]);
         as=as+1;
         str[i]=(char)(as);
        }
        
    }
    puts(str);
    return 0;
}
