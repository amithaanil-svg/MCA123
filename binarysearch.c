#include<stdio.h>
int main()
{
int a[20],n,key;
int low,high,mid,found = 0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements in sorted order:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to search:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid = (low+high/2);
if(a[mid]==key)
{
printf("Elements found at position %d",mid+1);
found=1;
break;
}
else if(a[mid]<key)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(found==0)
{
printf("Elements not found");
}
return 0;
}


