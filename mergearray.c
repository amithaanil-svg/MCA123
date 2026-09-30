#include <stdio.h>
int main()
{
int a[10],b[10],c[20];
int n,m,i;
printf("enter the size of first array:");
scanf("%d",&n);
printf("Enter the elements of first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("Enter the size of second array:\n");
scanf("%d",&m);
printf("Enter the elements of second array:\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
c[n+i]=b[i];
}
printf("Merged array:\n");
for(i=0;i<n+m;i++)
{
printf("%d \n",c[i]);
}
return 0;
}


