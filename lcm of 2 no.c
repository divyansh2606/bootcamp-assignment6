// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,i;
    printf("enter 2 no");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {break;
        }
    }
    printf("lcm is %d",i);
    return 0;
}





