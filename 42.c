#include<stdio.h>
int main(){
    int n,count =0;
    printf("Enter the number(Enter positive number only) :");
    scanf("%d",&n);
    for(int i =1 ; i<= n; i++){
        if(n % i == 0){
        count++;
        }
    }
    if(count == 2) {
        printf("The number %d is a prime number ",n);
    }
    else {
    printf("The number %d is a composite number ",n);
    }
    printf("\n");
}