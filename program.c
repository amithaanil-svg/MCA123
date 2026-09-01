#include <stdio.h>
int main() {
int a[10],n,key,i;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter elements to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(a[i]==key){
printf("Elements found at position %d (index %d)",i+1,i);
return 0;
}
}
printf("Element not found");
return 0;
}

