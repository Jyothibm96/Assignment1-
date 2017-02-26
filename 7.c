#include<stdio.h>
main()
{
int n,sum,missing_num,i,sum_array,a[5];
printf("enter n");
scanf("%d",&n);
sum=n(n+1)/2;
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum_array=sum_array+a[i];
missing_num=sum-sum_array;
printf("missing number is %d",missing_num);
}
