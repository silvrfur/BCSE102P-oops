int overall(int arr[],int n){ //n is the size of array
    if (n <= 0) {
            return 0;
          }
          return overall(arr, n-1 ) + arr[n-1];
}