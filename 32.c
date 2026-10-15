#include<stdio.h>
int main()
{
    int n,max , sec_max ,num;
    printf("Enter the counts :");
    scanf("%d",&n);
     printf("Enter the number :");
        scanf("%d",&num);
        max = sec_max = num;
    for(int i = 1; i < n; i ++)
    {
        printf("Enter the number :");
        scanf("%d",&num);
        if(num > max)
        max = num;
        else if (num > sec_max && num < max && num != 0)
        sec_max = num;
    }
    printf("Max = %d\n",max);
    printf("sec_max = %d\n",sec_max);
}