#include<stdio.h>
int main()
{
    int n,max , min ,num;
    printf("Enter the counts :");
    scanf("%d",&n);
     printf("Enter the number :");
        scanf("%d",&num);
        max = min = num;
    for(int i = 1; i < n; i ++)
    {
        printf("Enter the number :");
        scanf("%d",&num);
        if(num > max)
        max = num;
        else if (num < min)
        min = num;
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}