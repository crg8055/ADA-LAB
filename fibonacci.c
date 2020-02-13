// Fibonacci

  
#include <stdio.h> 
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    int n;
    printf("Enter Positive Integer:");
    scanf("%d",&n); 
    printf("%d", fib(n)); 
    getchar(); 
    return 0; 
} 
