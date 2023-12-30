#include <stdio.h>
#include <stdio.h>
int main()
{
 long num, temp, digit, sum = 0, reverse=0;
 printf("Enter the number: ");
 scanf("%ld", &num);
 temp = num;
 while (num > 0)
 {
 digit = num % 10;
 reverse = reverse * 10 + digit;
 sum = sum + digit;
 num /= 10;
 }
 printf("Given number = %ld\n", temp);
 printf("Sum of the digits %ld = %ld\n", temp, sum);
 if(reverse==temp)
 printf("Given number is palindrome = %ld\n", temp);
 else
 printf("Given number is not a palindrome = %ld\n", temp);
 return 0;
}


