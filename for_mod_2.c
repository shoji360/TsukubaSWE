#include <stdio.h>

void main(void){
    int i = 100;
    while(1){
        if(i == 0){
            printf("0 comes, break \n");
            break;
        }else{
            printf("please input the number (exit if 0 comes) \n");
            scanf("%d", &i);
            printf("your input is %d \n", i);
        }
    }
}