#include<stdio.h>
int main()
{
    float com ,sale;
    printf("Enter the number for sale :");
    scanf("%f",&sale);
    if(sale <= 500)
    com = 0.05 * sale;
    else if(sale <= 2000)
    com = 35 + 0.1 * (sale-500);
    else if(sale <= 5000)
    com = 185 + 0.12 * (sale-2000);
    else 
    com = 0.125 * sale;
    printf("Commision is %.2f\n",com);
}