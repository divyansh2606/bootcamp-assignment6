#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter no");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
