#include<stdio.h>
void add(int A[10][10],int B[10][10],int m,int n);
void main()
{
 int i,j,m,n,A[10][10],B[10][10];
 printf("Enter the no. of rows: ");
 scanf("%d",&m);
 printf("Enter the no. of columns: ");
 scanf("%d",&n);
 printf("Enter the elements of matrix A:\n");
 for(i=0;i<m;i++)

{
 for(j=0;j<n;j++)

{
  scanf("%d",&A[i][j]);

}

}
 printf("Enter the elements of matrix B:\n");
 for(i=0;i<m;i++)

{
 for(j=0;j<n;j++)

{
 scanf("%d",&B[i][j]);

}

}
 add(A,B,m,n);
 return 0; }
void add(int A[10][10],int B[10][10],int m,int n)
 {
 int C[10][10],i,j;
 for(i=0;i<m;i++)

{
 for(j=0;j<n;j++)

{
 C[i][j]=A[i][j]+B[i][j];

}

}
 printf("The addition of two matrices A and B is\n");
 for(i=0;i<m;i++)

{
 for(j=0;j<n;j++)

{
 printf("%3d",C[i][j]);

}
 printf("\n");

}
}

