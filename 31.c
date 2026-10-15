#include<stdio.h>
int main()
{
    long n,temp;
    int sum = 0;

    printf("Enter the number :"); scanf("%ld",&n);
    temp = n;
    while (temp>0){
        sum+=temp %10;
        temp/=10;
    }
    printf("sum of digits of %ld is %d\n",n,sum);
}