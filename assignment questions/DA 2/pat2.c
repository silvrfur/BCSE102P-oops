/*
Write a c program to find the number of  words,vowels, consonants, space and special characters in a string

INPUT:

*Nothing is impossible in this world.

OUTPUT:

Words = 6

Vowels = 10

Consonants = 20

Space = 5

Special Characters = 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    int wrd=1,v=0,c=0,s=0,special=0;
    char str[100];
    printf("input the sentence\n");
    fgets(str,sizeof(str),stdin);
    strlwr(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            s+=1;
            if(isalpha(str[i+1])!=0)
                wrd+=1;
        }
        else if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            v+=1;
        }
        else if(isalpha(str[i])!=0){
            c+=1;
        }
        else{
            special+=1;
        }
    }
    printf("No. of words= %d\n",wrd);
    printf("No. of vowels=%d\n",v);
    printf("No. of consonants=%d\n",c);
    printf("No. of space=%d\n",s);
    printf("No. of special charactes=%d\n",special);
    return 0;
}
