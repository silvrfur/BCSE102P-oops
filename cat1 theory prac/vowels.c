//count no. of vowels, consonants, whitepace, special characters, words in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char str[1000],str1[1000];
    int cv=0,cc=0,ws=0,sp=0,wrd=0;
    printf("Enter the stirng\n");
    fgets(str,sizeof(str),stdin);
    strlwr(str);
    // int n=isalpha(str[0]);
    // printf("%d",n);
    for (int i = 0; i < strlen(str)-1; i++)
    {
        if(isalpha(str[i])!=0){
            if (str[i]=='a'|| str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            {
                cv+=1;
            }
            else{
                cc+=1;
            }
            
        }
        else if(isspace(str[i])!=0)
            ws+=1;
        else
            sp+=1;
        if(isspace(str[i]) && isalpha(str[i+1]))
            wrd+=1;

    }
    printf("vowels=%d ",cv);
    printf("consonantss=%d ",cc);
    printf("whitespace=%d ",ws);
    printf("special character=%d ",sp);
    printf("word=%d ",wrd+1);
    return 0;
}
