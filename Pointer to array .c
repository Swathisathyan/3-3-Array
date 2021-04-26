#include <stdio.h>
int main()
{int a[3][3];int i,j; int *p=&a[i][j];
 int sum;
 printf("Enter the elements for the 3*3 matrix");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
  {
	   scanf("%d",(*(a+i)+j));
  }
 }  
    
  for(i=0; i<3; i++) {
     for(j=0;j<3;j++) {
      printf("\n%d ", *(*(a+i)+j));
     }}
      for(i=0;i<3;i++)   {
        for(j=0;j<3;j++)
  {
   if(i==j)
   {
   sum=sum+a[i][j];}
   }
  }
    printf("\nThe sum of diagonal elements of the given 3*3 matrix = %d\n",sum);
   return 0;
}
