#include<stdio.h>
int main()
{
   int m,n;
   scanf("%d %d",&m,&n);
   int matrix[m+1][n+1];
   for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++)
   scanf("%d",&matrix[i][j]);
   int primary=1,secondary=1;
   int validation1=0,validation2=0,validation3=1,validation4=1;
   //accessing primary diagonal
   for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++){
      if(i==j)
      {
         primary*=matrix[i][j];
      }
   }
   if(primary==1)
   validation1=1;
      //accesssing secondary diagonal
   for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++){
      if(i+j==n+1)
      {
         secondary*=matrix[i][j];
      }
   }
   if(secondary==1)
   validation2=1;
     // accessing non primary and non secondary diagonal
   if(validation1==1 && validation2==1)
   {
      for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
      if(i+j!=n+1 && i!=j)
      {
         if(matrix[i][j]!=0){
         validation3=0;
         break;
         }
      }
      }
      if(validation3==0)break;

   }
   }

   if(validation1==1 && validation2 ==1 && validation3 ==1)
   printf("YES");
   else
   printf("NO");


}
