/* 4] program to find smallest and largest no in an array*/

#include<stdio.h>
int main()
{
int a[5],i,n,min,max;
printf("enter the array elements:");
for(i=0;i<n;i++);
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<n;i++)
if(a[i+1]>max)
max=a[i+1];
printf("largestno is %d",max);
min=a[0];
for(i=0;i<n;i++)
if(a[i+1]<min)
min=a[i+1];
printf("smallest no is %d",min);
return 0;
}
