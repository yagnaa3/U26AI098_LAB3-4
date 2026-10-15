#include<stdio.h>
int main()
{
    int n , sum = 0 , temp, q;
    printf("Enter the number :"); scanf("%d",&n);
    temp = n;
    while (temp>0)
    {
        q = temp%10 ;
        sum = sum + (q * q * q);
        temp = temp/10;
    }
    if (sum==n)printf("%d is armstrong\n",n);
    else printf("%d is not armstrong\n",n);
}