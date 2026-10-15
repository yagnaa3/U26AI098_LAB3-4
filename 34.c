#include<stdio.h>
int main()
{
    int f1 =0 , f2 = 1 ,f,n;
    printf("Enter the count :");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        f= f1 + f2;
         printf("%d ",f1);
        f1 = f2;
        f2 = f;
       
    }
    printf("\n");
}