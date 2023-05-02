/*
The temperature in Chennai exists somewhere between 280C to 330C in a particular 
week. The temperature in Delhi is 8
0C lesser than in Chennai. Likewise, the 
temperature in Haveri is 5
0C more than that of Chennai. Write a C program to find the 
temperature of Gangtok for a particular week, which is the temperature difference 
between Delhi and Haveri. Get the temperature of Chennai (
0C) as input for the week 
of 7 days and the temperature of Gangtok (
0C) as output for the week of 7 days. 
Implement the program using arrays and validate the rules.
*/
#include <stdio.h>


int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int sum = 0;
    
    
    for (int i = 1000; i <= 9998; i += 2) {
        sum += i;
    }
    
    
    while (sum > 9) {
        sum = sumOfDigits(sum);
    }
  
    if (sum % 2 == 0) {
        printf("Even found\n");
    } else {
        printf("Odd found\n");
    }
    
    return 0;
}
