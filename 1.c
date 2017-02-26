/* 1] Finding a number in an array */

#include<stdio.h>
int main()
{
int i,n,x,a[10],flag;
printf("\nenter the number of elements:");
scanf("%d",&n);
printf("enter the array elements:")
scanf("%d",&a[i]);
printf("enter the element to be searched:");
scanf("%d",&x);
flag=0;
for(i=0;i<n;i++)
{
if(a[i]==x)
{
flag=1;
printtf("number found :");
}
}
if(flag==0)
{
printf("number not found in an array");
}
return 0;
}