#include <stdio.i>

void main(){
    // very slow prime number finder
    int num;
    printf("input your favorite number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if (i == num){
            printf("%d is prime number!", num);
            break;
        }
        if (i % num == 0){
            printf("%d can be divided by %d", num, i);
            break;
        }
    }
}