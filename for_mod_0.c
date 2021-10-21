#include <stdio.h>

void main(){
    // very slow prime number finder
    int num;
    printf("input your favorite number: ");
    scanf("%d", &num);
    if (num == 1){
        printf("1 is prime number!");
    }
    for (int i = 2; i <= num; i++){
        if (i == num){
            printf("%d is prime number!", num);
            break;
        }
        if (num % i == 0){
            printf("%d can be divided by %d", num, i);
            break;
        }
    }
}