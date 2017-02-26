/* 3]program to implement bubble sort */
#include<stdio.h>
void main()
{
int n,i,j,a[10],b[10],temp;
for(i=0;i<10;i++)
{
a[i]=0;
b[i]=0;
}
printf("enter the no. of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
b[i]=a[i];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("the given array of elements is\n");
for(i=0;i<n;i++)
printf("%d",b[i]);
printf("the sorted array of the given array is \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
