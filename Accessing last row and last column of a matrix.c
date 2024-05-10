#include<stdio.h>
int main()
{
   int m,n;
   scanf("%d %d",&m,&n);
   int matrix[m+1][n+1];
   for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++)
   scanf("%d",&matrix[i][j]);
   
   for(int i=m;i<=m;)
   {
      for(int j=1;j<=n;j++)
      printf("%d ",matrix[i][j]);
      break;
   }
   printf("\n");
   for(int i=n;i<=n;)
   {
      for(int j=1;j<=m;j++)
      printf("%d ",matrix[j][i]);
      break;
   }
}