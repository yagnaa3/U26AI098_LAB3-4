#include<stdio.h>
int main()
{
    int n,temp,sum =0 , q;
    printf("enter the number :"); scanf("%d",&n);
    temp = n;
    while(temp >0 )
    {
        q = temp %10 ;
        sum = (sum * 10 ) + q;
        temp = temp / 10;
    } 
    if (sum == n ) printf("%d is an palindron number ",n);
    else printf("%d is not an palindron numnber ",n);
}