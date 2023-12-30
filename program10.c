#include <stdio.h>
int main()
{
 int n, i,rows;
 printf("Enter an integer: ");
 scanf("%d",&n);
 printf("Enter the number of rows: ");
 scanf("%d",&rows);
 for(i=1; i<=rows; i++)
 {
 printf("%d * %d = %d \n", n, i, n*i);
 }
 return 0;
}
