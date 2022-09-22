#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("enter no");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==2)
        {
             flag==1;
            break;
        }
        }
        if(flag==1)
        {
            printf("no is not prime");
        }
        else
            printf("prime no");
        return 0;
}
