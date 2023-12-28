#include <stdio.h> 
 int main() 
 { 
     int n, firstDigit,lastdigit,sum=0; 
     /* Input number from user */ 
     printf("Enter any number: "); 
     scanf("%d", &n); 
 lastDigit=n%10; 
     /* Get the first digit */ 
 while(n>=10) 
 { 
 n=n/10; 
 } 
     firstDigit = n ; 
 sum=firstDigit + lastDigit; 
     printf("Sum = %d",sum); 
     return 0; 
 } 
