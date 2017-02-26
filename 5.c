/* 5] program to remove duplicate numbers in an array*/

#include<stdio.h>
void main()
{
int a[0],i,j,k,n;
printf("enter the array size");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n original array is");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("new array is");
for(i=0;i<n;i++)
for(j=i+1;j<n;)
{
if(a[j]==a[i])
{
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
n--;
else
j++;
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
