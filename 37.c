#include<stdio.h>
int main()
{
    int n,sum=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++) {
         printf("%d ",sum);
        sum = sum +2;
    }
    printf("\n");
    printf("The sum of the even no. is %d\n",sum);
}