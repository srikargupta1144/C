#include<stdio.h>
int main()
{
 int i,n,sum =0,min,max,list[100];
 float avg;
 printf("Enter no of elements: ");
 scanf("%d",&n);
 printf("Enter %d elements \n",n);
 for(i=0;i<n;i++)
 scanf("%d",&list[i]);
 min=max=sum= list[0];
 for(i=1;i<n;i++)
 {
 if(list[i]>max)
max=list[i];
 if(list[i]<min)
min=list[i];
 sum+=list[i];
 }
avg=sum/(float)n;
 printf("The list of elements are:\n");
 for(i=0;i<n;i++)
 printf("%d\t",list[i]);
 printf("\n");
 printf("Maximum Value = %d\n",max);
 printf("Minimum Value = %d\n",min);
 printf("Average = %f\n",avg);
 return 0;
}
