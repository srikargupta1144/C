#include <stdio.h>
int main()
{ 
   int a=0,b=1,c,n;
   printf("upto how many numbers you want:");
   scanf("%d",&n);
   printf("The fibonacci series is: \n ");
   printf("%d \t %d",a,b);
   do 
   {
   	c=a+b;
   	printf("\t %d",c);
   	a=b;
   	b=c;
   	n--;
   }while(n>0);
}
