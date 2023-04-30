//count frequency of character occuring max times in string
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[1000];
    char maxchar;
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    int count=1,max=0;
    for (int i = 0; i < strlen(str)-1; i++)
    {
        if(str[i]>'a' && str[i]<'z' || str[i]>'A' && str[i]<'Z'){
            for(int j=i+1;j<strlen(str)-1;j++){
                if(str[j]==str[i])
                    count+=1;
            }
        }
        if(count>max){
            max=count;
            maxchar=str[i];
        }
    }
    printf("The character which occurs max times is %c\n",maxchar);
    printf("The count of char occuring max tims is %d",count);
    return 0;
}
