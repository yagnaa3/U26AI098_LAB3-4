#include <stdio.h>
int main() {
float u, bill = 0.0;
printf("Enter Units Consumed:"); 
scanf("%f", &u);
if (u <= 200) 
bill = u * 0.50;
else if (u <= 400) 
bill = 100.0 + (u - 200) * 0.65;
else if (u <= 600) 
bill = 230.0 + (u - 400) * 0.80;
else 
bill = 425.0 + (u - 600) * 1.25;
printf("Electricity Amount to be Paid = Rs. %.2f\n",bill);
}