#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}








// //reverse a string using recursion
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     char sen[100];
//     char revsen[100];
//     printf("Enter the sentence to be reversed");
//     fgets(sen,sizeof(sen),stdin);
//     // scanf("%[^\n]s",sen);
//     printf("string before reversing");
//     puts(sen);

//     // printf("size of string is %d ",sizeof(sen));
//     printf("string after reversal: \n");
//     // strrev(sen);
//     char me[]="shruti";
//     printf("the length of string is %d: ", strlen(me)); //using built in function
//     //reversing without recursion
//     // for (int i = sizeof(sen)-1; i >=0; i--)
//     // {
//     //     printf(sen[i]);
//     //     /* code */
//     // }
    
//     return 0;
// }
// //current hold
// // using built in
// //making copy of string in c 
// //write yourself the without
// //recursion