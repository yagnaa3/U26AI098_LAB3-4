#include<stdio.h>
int main()
{
    int n,fact =1,so;
    printf("ENter the value : "); scanf("%d",&n);
    for(int i = 1; i <= n ; i++)
    {
        fact = fact * i;
        printf("%d/%d ",i,fact);
    }
    printf("\n");
     for(int i = 1; i <= n ; i++)
    {
        printf("%d/%d! ",i,i);
    }
     printf("\n");
}