#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number(negtaive to stop): ");
    
    while (1) {
    scanf("%d", &n);
    if(n<0) break;
    sum+= n;
    }
    printf("The sum is %d\n", sum);
}