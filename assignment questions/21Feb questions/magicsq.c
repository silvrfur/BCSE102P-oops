// // #include <stdio.h>
// // int main(){
// //     int n,i,j,k;
// //     scanf("%d",&n);
// //     int ms[n][n];
// //     for(i=1;i<n*n;i++){
// //         j=(n-i%n+1+2*((i-1)/n))%n;
// //         k=((n-1)/2+i-1-(i-1)/n)%n;
// //         ms[j][k]=i;

// //     }
// //     for(j=0;j<n;j++){
// //         for ( k = 0; k < n; k++)
// //         {
// //             printf("%d ",ms[j][k]);
// //         }
// //         printf("\n");
        
// //     }
// //     return 0;
// // }

// // C program to generate odd sized magic squares
// #include <stdio.h>
// #include <string.h>

// // A function to generate odd sized magic squares
// void generateSquare(int n)
// {
// 	int magicSquare[n][n];

// 	// set all slots as 0
// 	memset(magicSquare, 0, sizeof(magicSquare));

// 	// Initialize position for 1
// 	int i = n / 2;
// 	int j = n - 1;

// 	// One by one put all values in magic square
// 	for (int num = 1; num <= n * n;) {
// 		if (i == -1 && j == n) // 3rd condition
// 		{
// 			j = n - 2;
// 			i = 0;
// 		}
// 		else {
// 			// 1st condition helper if next number
// 			// goes to out of square's right side
// 			if (j == n)
// 				j = 0;

// 			// 1st condition helper if next number
// 			// is goes to out of square's upper side
// 			if (i < 0)
// 				i = n - 1;
// 		}
// 		if (magicSquare[i][j]) // 2nd condition
// 		{
// 			j -= 2;
// 			i++;
// 			continue;
// 		}
// 		else
// 			magicSquare[i][j] = num++; // set number

// 		j++;
// 		i--; // 1st condition
// 	}

// 	// Print magic square
// 	printf("The Magic Square for n=%d:\nSum of "
// 		"each row or column %d:\n\n",
// 		n, n * (n * n + 1) / 2);
// 	for (i = 0; i < n; i++) {
// 		for (j = 0; j < n; j++)
// 			printf("%3d ", magicSquare[i][j]);
// 		printf("\n");
// 	}
// }

// // Driver program to test above function
// int main()
// {
// 	int n = 4; // Works only when n is odd
// 	generateSquare(n);
// 	return 0;
// }


/*magic square of doubly even order*/
#include <stdio.h>
int main(){
    // define an 2-D array of order n*n
    // fill array with their index-counting 
    // starting from 1
    int n=4; //the matrix order
    int k=1;
    int arr[n][n];
    for (int i = 0; i<n; i++)
    {
        for ( int j = 0; j<n; j++)
            // filling array with its count value 
            // starting from 1;
            arr[i][j] = (n*i) + j + 1;        
            // arr[i][j] = k;   
            // k++;     
    }

    // change value of Array elements 
    // at fix location as per rule 
    // (n*n+1)-arr[i][j]
    // Top Left corner of Matrix 
   // (order (n/4)*(n/4))
    for (int i = 0; i<n/4; i++)
    {
        for ( int j = 0; j<n/4; j++)
            arr[i][j] = (n*n + 1) - arr[i][j];
    }

    // Top Right corner of Matrix 
    // (order (n/4)*(n/4))
    for (int i = 0; i< n/4; i++)
    {
        for ( int j = 3* (n/4); j<n; j++)
            arr[i][j] = (n*n + 1) - arr[i][j];
    }

    // Bottom Left corner of Matrix 
    // (order (n/4)*(n/4))
    for ( int i = 3* n/4; i<n; i++)
    {
        for (int j = 0; j<n/4; j++)
            arr[i][j] = (n*n + 1) - arr[i][j];
    }
 
    // Bottom Right corner of Matrix 
   // (order (n/4)*(n/4))
    for ( int i = 3* n/4; i<n; i++)
    {
        for ( int j = 3* n/4; j<n; j++)
            arr[i][j] = (n*n + 1) - arr[i][j];
    }
 
    // Centre of Matrix (order (n/2)*(n/2))
    for ( int i = n/4; i<3* n/4; i++)
    {
        for ( int j = n/4; j<3* n/4; j++)
            arr[i][j] = (n*n + 1) - arr[i][j];
    }

    //print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
     
}