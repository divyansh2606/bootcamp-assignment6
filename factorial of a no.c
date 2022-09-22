#include<stdio.h>
int main()
{
    int n,fact=1,s;
        printf("enter no");
    scanf("%d",&n);
    s=n;
    for(int i=1;n>=i;n--)
    {
        fact=fact*n;
    }
    printf(" factorial of %d is %d",s,fact);
    return 0;


}



