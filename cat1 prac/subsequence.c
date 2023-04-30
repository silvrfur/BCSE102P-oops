//wap to print the subsequence of charcter
#include <stdio.h>
#include <string.h>
int subsequence(char str[],char output[]){
    if(strlen(str)==0){
        output[0]="";
        return 1;
    }
    int smallerOutputSize=subsequence(substr(str))
}