#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("sum of first %d square natural no is %d",n,sum);
    return 0;
}

