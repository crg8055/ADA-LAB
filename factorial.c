// Finding factorial of a given number

  
#include <stdio.h> 
  

unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  

int main() 
{ 
    int num;
    printf("Enter Positive Integer:");
    scanf("%d",&num); 
    printf("Factorial of %d is %d\n", num, factorial(num)); 
    return 0; 
}
