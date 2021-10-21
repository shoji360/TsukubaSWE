#include <stdio.h>

int main(void){
    int price;
    printf("input price:");
    scanf("%d", &price);
    printf("tax include: %f yen", 1.1 * price);
}
