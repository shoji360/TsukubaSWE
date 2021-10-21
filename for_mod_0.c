#include <stdio.h>

void main(void){
    // very slow prime number finder
    int num,i,flag;
    printf("input your favorite number: ");
    scanf("%d", &num);
    flag=0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d can be divided by %d\n", num, i);
            flag=1;
        }
    }

    if (flag==0)
    {
        printf("%d is a prime number!\n", num);
    }
    if (flag==1)
    {
        printf("%d is not a prime number!\n", num);
    }
}