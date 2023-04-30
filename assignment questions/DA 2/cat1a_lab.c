/*
Write a C program that accepts a string as input,print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:

POSSIBLE TEST CASES:

INPUT:

SUJITHRA

OUTPUT:

Length of the string is: 8
Word frequency is: 8
No repeated characters found in the string.
First non-repeated character is: S

#2 INPUT:

ASSDFG

OUTPUT:

Length of the string is: 6
Word frequency is: 5
First repeated character is: S
First non-repeated character is: A

 

#3 INPUT:

RUDRESH

OUTPUT:

Length of the string is: 7
Word frequency is: 6
First repeated character is: R
First non-repeated character is: U
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter the word\n");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    printf("Lenght of the string is: %d\n",len);

    //counting frequency of charactes in given word
    int count=0;
    strupr(str);
    for(char i='A';i<'Z';i++){
        for(int j=0;j<len;j++){
            if(str[j]==i){
                count+=1;
                break;
            }
        }
    } 
    printf("The frequency is: %d\n",count);

    //first non-repeated and repeated character using pointer
    int c1=0,c2=0;
    for(int i=0;i<len;i++){
        if(*(str+i)==*(str+i+1)){
            if(c1!=1){
                printf("The first repeated character is:%c\n",*(str+i));
                c1+=1;
            }
        }
        else{
            if(c2!=1){
                 printf("The first non-repeated character is:%c\n",*(str+i));
                c2+=1;
            }
        }
        if(c1==0 && c2==0)
            break;
    }
    if(c1==0){
        printf("No repeated character");
    }
    return 0;
}
