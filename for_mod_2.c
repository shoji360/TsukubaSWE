#include <stdio.h>

void main(void){
    int i = 100;
    while(1){
        if(i == 0){
            break;
        }
        printf("please input the number (exit if 0 comes)");
        scanf("%d", &i);
        printf("your input is %d", i);
    }
}