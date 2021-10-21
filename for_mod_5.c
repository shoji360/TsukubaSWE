#include <stdio.h>

int main(void){
    int price;
    printf("input price:");
    scanf("%d", &price);
    printf("tax include: %d yen\n",(int)( 1.1 * price));
}
