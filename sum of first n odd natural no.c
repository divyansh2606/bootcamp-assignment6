#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*2)-1;
    }
    printf("sum of first %d odd natural no is %d",n,sum);
    return 0;
}

