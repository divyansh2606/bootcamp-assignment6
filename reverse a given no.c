#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("enter no");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("reverse is %d",rev);
    return 0;
}
