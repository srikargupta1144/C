#include<stdio.h>
int main()
{
 int n,i,fact,j;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 printf("Then following are the prime numbers: \n");
 for(i=1;i<=n;i++)
 {
 fact=0;
 for(j=1;j<=i;j++)
 {
 if(i%j==0)
 fact++;
 }
 if(fact==2)
 printf("%d\t",i);
 }
return 0;
}

