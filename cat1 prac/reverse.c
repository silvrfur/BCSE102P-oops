//wap to reverse a string w built in, without built in, using recursion
#include <stdio.h>
#include <string.h>
//reverse using recursion
void reverse(char *s){ //the array of characters as argument
    if(*s!='\0'){
        reverse(s+1);
        printf("%c",*s);
    }
}
int main(int argc, char const *argv[])
{
    char sen[1000],sen1[1000],sen2[1000];
    printf("Enter the string to be reversed\n");
    fgets(sen,sizeof(sen),stdin);
    printf("String before reversing:\n %s\n",sen);
    strcpy(sen1,sen);
    strrev(sen1);
    printf("String after reversing using built-in function: \n");
    puts(sen1);
    strcpy(sen2,sen);
    /*finding length of string without using build in function
        use counter variable
        in while loop increment the variable, condition of loop untill null char is encountered*/
    printf("String after reversing without using built-in function \n");
    int len=strlen(sen2)-1;
    for (int i = 0; i < len/2; i++)
    {
        char temp=sen2[i];
        sen2[i]=sen2[len-i];
        sen2[len-i]=temp;
    }
    puts(sen2);
    printf("String after reversing using recursion \n");
    reverse(sen);
    return 0;
}
