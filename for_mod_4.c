#include <stdio.h>

int main(void){
    // the table of kuku!
    for (int i = 1; i <= 9; i++){
        for (int j = 1; i <= 9; j++){
            printf("%6d ", i * j);
        }
        printf("¥n");
    }
}