#include<stdio.h>
int main()
{
    int n,sum =0 ,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n > 9){
        while(n > 0){
            sum+=n%10;
            n = n/10;
        }
        n = sum;
        sum =0;
    }
    printf("The sum is %d\n",n);
}