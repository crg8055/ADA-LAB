#include <math.h> 
#include <stdio.h> 
 #include<time.h>

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  

void printArray(int arr[], int n) 
{ 
    int i; 
    printf("The Sorted array is:\n");
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  

int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  clock_t start, end;
     double cpu_time_used;
     
    start = clock();
    insertionSort(arr, n); 
    end = clock();
    
    printArray(arr, n); 
    
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("The time taken to sort elements is : %f\n",cpu_time_used);
    return 0; 
} 
