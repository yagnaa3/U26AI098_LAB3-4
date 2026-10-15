#include<stdio.h>
int main()
{
    int n,p=0;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i = 1 ;i <= n;i++ )
    {
       if( n % i == 0)
    p++;
    }
    if(p==2)
    printf("The number %d is prime  ",n);
    else 
    printf("The number %d is not prime  ",n);
    printf("\n");
}